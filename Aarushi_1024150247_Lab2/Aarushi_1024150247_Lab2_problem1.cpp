//aarushi247//Q1(a)part
#include <iostream>
#include <cstdlib>
using namespace std;
int main() {
    int size, x;
    cout << "Enter size of the array: ";
    cin >> size;
    int *arr = (int*)malloc(size * sizeof(int));
    cout << "enter elements:\n";
    for(int i = 0; i<size; i++) {
        cin >> arr[i];
    }
    cout << "enter element at beginning: ";
    cin >> x;
    for(int i = size; i>0; i--) {
        arr[i]= arr[i-1];
    }
    arr[0] = x;
    cout << "array after insertion:\n";
    for(int i = 0; i<size; i++) {
        cout << arr[i] << "\t";
    }
    free(arr);
    return 0;
}

//aarushi247//Q1(b)part
// #include <iostream>
// #include <cstdlib>
// using namespace std;
// int main() {
//     int size, x;
//     cout << "Enter size of the array: ";
//     cin >> size;
//     int *arr = (int*)malloc((size + 1) * sizeof(int));
//     cout << "Enter elements of the array:\n";
//     for (int i = 0; i < size; i++) {
//         cin >> arr[i];
//     }
//     cout << "Enter element to insert at end: ";
//     cin >> x;
//     arr[size] = x;   // insert at end
//     size++;

//     cout << "Array after insertion:\n";
//     for (int i = 0; i < size; i++) {
//         cout << arr[i] << "\t";
//     }
//     free(arr);
//     return 0;
// }






//aarushi247//Q1(c)part
// #include <iostream>
// #include <cstdlib>
// using namespace std;
// int main() {
//     int size, x, pos;
//     cout << "Enter size of the array: ";
//     cin >> size;
//     int *arr = (int*)malloc((size + 1) * sizeof(int));
//     cout << "Enter elements of the array:\n";
//     for (int i = 0; i < size; i++) {
//         cin >> arr[i];
//     }
//     cout << "Enter position (0-based index): ";
//     cin >> pos;
//     cout << "Enter element to insert: ";
//     cin >> x;
//     if (pos < 0 || pos > size) {
//         cout << "Invalid position";
//         return 0;
//     }
//     // Shift elements to right
//     for (int i = size; i > pos; i--) {
//         arr[i] = arr[i - 1];
//     }
//     arr[pos] = x;
//     size++;
//     cout << "Array after insertion:\n";
//     for (int i = 0; i < size; i++) {
//         cout << arr[i] << "\t";
//     }
//     free(arr);
//     return 0;
// }



