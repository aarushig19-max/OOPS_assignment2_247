//aarushi247//Q3(a)part
// #include <iostream>
// using namespace std;
// int main() {
//     int n, sum = 0;

//     cout << "Enter size of array: ";
//     cin >> n;

//     int arr[n];
//     cout << "Enter array elements:\n";
//     for(int i = 0; i < n; i++) {
//         cin >> arr[i];
//         sum = sum + arr[i];
//     }
//     cout << "Sum of array elements = " << sum;
//     return 0;
// }


//aarushi247//Q3(b)part
// #include <iostream>
// using namespace std;
// int main() {
//     int n;
//     cout << "Enter size of array: ";
//     cin >> n;
//     int arr[n];
//     cout << "Enter array elements:\n";
//     for(int i = 0; i < n; i++)
//         cin >> arr[i];

//     int max = arr[0];

//     for(int i = 1; i < n; i++) {
//         if(arr[i] > max)
//             max = arr[i];
//     }

//     cout << "Maximum element = " << max;
//     return 0;
// }


//aarushi247//Q3(c)part
#include <iostream>
using namespace std;
int main() {
    int n, key;
    cout << "Enter size of array: ";
    cin >> n;

    int arr[n];
    cout << "Enter array elements:\n";
    for(int i = 0; i < n; i++)
        cin >> arr[i];
cout << "Enter element to search: ";
    cin >> key;
 int found = 0;
for(int i = 0; i < n; i++) {
        if(arr[i] == key) {
            cout << "Element found at index " << i;
            found = 1;
            break;
        }
    }
if(found == 0)
        cout << "Element not found";
return 0;
}
