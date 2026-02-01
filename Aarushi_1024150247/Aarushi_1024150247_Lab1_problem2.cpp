//aarushi247//Q2(a)part
// #include <iostream>
// using namespace std;
// int main() {
//     int n;
//     cout << "Enter a number (1 to 9): ";
//     cin >> n;
//     if(n == 1) cout << "One";
//     else if(n == 2) cout << "Two";
//     else if(n == 3) cout << "Three";
//     else if(n == 4) cout << "Four";
//     else if(n == 5) cout << "Five";
//     else if(n == 6) cout << "Six";
//     else if(n == 7) cout << "Seven";
//     else if(n == 8) cout << "Eight";
//     else if(n == 9) cout << "Nine";
//     else cout << "Invalid input";

//     return 0;
// }


//aarushi247//Q2(b)part
// #include <iostream>
// using namespace std;

// int main() {
//     int n;
//     cout << "Enter size of array: ";
//     cin >> n;
//     int arr[n];
//     cout << "Enter elements:\n";
//     for(int i = 0; i < n; i++)
//         cin >> arr[i];

//     cout << "Reversed array:\n";
//     for(int i = n-1; i >= 0; i--)
//         cout << arr[i] << " ";

//     return 0;
// }


//aarushi247//Q2(c)part
// #include <iostream>
// using namespace std;
// int main() {
//     int n;
//     cout << "Enter size: ";
//     cin >> n;

//     int arr[n];
//     for(int i = 0; i < n; i++)
//         cin >> arr[i];

//     int max = arr[0], index = 0;

//     for(int i = 1; i < n; i++) {
//         if(arr[i] > max) {
//             max = arr[i];
//             index = i;
//         }
//     }
//     cout << "Index of largest element = " << index;
//     return 0;
// }


//aarushi247//Q2(d)part
// #include <iostream>
// using namespace std;
// int main() {
//     int n;
//     cout << "Enter size: ";
//     cin >> n;

//     int arr[n];
//     for(int i = 0; i < n; i++)
//         cin >> arr[i];

//     int last = arr[n-1];

//     for(int i = n-1; i > 0; i--)
//         arr[i] = arr[i-1];

//     arr[0] = last;

//     cout << "Shifted array:\n";
//     for(int i = 0; i < n; i++)
//         cout << arr[i] << " ";

//     return 0;
// }


//aarushi247//Q2(e)part
// #include <iostream>
// using namespace std;
// int main() {
//     int n;
//     cout << "Enter size: ";
//     cin >> n;
//     int arr[n];
//     for(int i = 0; i < n; i++)
//         cin >> arr[i];

//     cout << "Array after removing duplicates:\n";

//     for(int i = 0; i < n; i++) {
//         bool duplicate = false;
//         for(int j = 0; j < i; j++) {
//             if(arr[i] == arr[j]) {
//                 duplicate = true;
//                 break;
//             }
//         }
//         if(!duplicate)
//             cout << arr[i] << " ";
//     }
//     return 0;
// }



//aarushi247//Q2(f)part
#include <iostream>
using namespace std;
int main() {
    int n1, n2;
    cout << "Enter size of first array: ";
    cin >> n1;
    cout << "Enter size of second array: ";
    cin >> n2;
    int a[n1], b[n2];
    for(int i = 0; i < n1; i++)
        cin >> a[i];

    for(int i = 0; i < n2; i++)
        cin >> b[i];

    cout << "Merged array:\n";
    for(int i = 0; i < n1; i++)
        cout << a[i] << " ";
    for(int i = 0; i < n2; i++)
        cout << b[i] << " ";
    return 0;
}
