// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cin >> n;
//     int arr[1000];
//     for(int i=0; i<n; i++){
//         cin >> arr[i];
//     }
//     int start=0, end=n-1;
//     while (start<end){
//         int temp = arr[start];
//         arr[start]=arr[end];
//         arr[end]=temp;
//         start ++;
//         end--;
//     }
//     for(int i=0; i<n; i++){
//         cout << arr[i] << " ";
//     }
//     return 0;
// }

// #include<iostream>
// using namespace std;
// int main(){
//     int n, x;
//     cin >> n;
//     int arr[100];
//     for(int i=0; i<n; i++)
//     cin >> arr[i];
//     cin >> x; //insert
//     for(int i=n; i>0; i--)
//     arr[i]=arr[i-1];
//     arr[0] = x;
//     n++;
//     for(int i=0; i<n; i++)
//     cout << arr[i] << " ";
//     return 0;
// }

#include <iostream>
#include <cstdlib>   // for malloc, free
using namespace std;

int main() {
    int n;
    cout << "Enter size: ";
    cin >> n;

    // dynamic array using malloc
    int *arr = (int*) malloc(n * sizeof(int));

    cout << "Enter elements:\n";
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int x;
    cout << "Enter element to add at end: ";
    cin >> x;

    // create new array of size n+1
    int *newArr = (int*) malloc((n + 1) * sizeof(int));

    // copy old elements
    for(int i = 0; i < n; i++) {
        newArr[i] = arr[i];
    }

    // add new element at end
    newArr[n] = x;
    n++;

    // free old memory
    free(arr);

    // point arr to new memory
    arr = newArr;

    cout << "Updated array: ";
    for(int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }

    free(arr);
    return 0;
}


// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cout << "enter size: ";
//     cin >> n;
    
//     int arr[100];
//     cout << "enter elements: ";
//     for(int i=0; i<n;i++){
//         cin >> arr[i];
//     }
//     int x, pos;
//     cin >> x >> pos;
//     if(pos <0 || pos>n){
//         cout << "invalid position";
//     }
//     for (int i=n; i>pos; i--){
//         arr[i]=arr[i-1];
//     }
//     arr[pos]=x;
//     n++;
//     for(int i=0; i<n;i++){
//         cout << arr[i] << " "
//     }


