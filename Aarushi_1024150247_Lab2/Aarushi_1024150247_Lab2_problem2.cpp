//aarushi247//Q2(a)part
// #include <iostream>
// #include <cstdlib>
// using namespace std;
// int linearSearch(int *arr, int n, int x) {
//     for (int i = 0; i < n; i++) {
//         if (arr[i] == x)
//             return i;
//     }
//     return -1;
// }
// int main() {
//     int n, x;
//     cout << "Enter size: ";
//     cin >> n;
//     int *arr = (int*)malloc(n * sizeof(int));
//     cout << "Enter elements: ";
//     for (int i = 0; i < n; i++)
//         cin >> arr[i];
//     cout << "Enter element to search: ";
//     cin >> x;
//     int index = linearSearch(arr, n, x);
//     if (index == -1)
//         cout << "Element not found";
//     else
//         cout << "Element found at index " << index;
//     free(arr);
//     return 0;
// }



//aarushi247//Q2(b)part
// #include <iostream>
// #include <cstdlib>
// using namespace std;
// int binarySearch(int *arr, int n, int x) {
//     int low = 0, high = n - 1;

//     while (low <= high) {
//         int mid = (low + high) / 2;

//         if (arr[mid] == x)
//             return mid;
//         else if (arr[mid] < x)
//             low = mid + 1;
//         else
//             high = mid - 1;
//     }
//     return -1;
// }

// int main() {
//     int n, x;
//     cout << "Enter size: ";
//     cin >> n;

//     int *arr = (int*)malloc(n * sizeof(int));

//     cout << "Enter sorted elements: ";
//     for (int i = 0; i < n; i++)
//         cin >> arr[i];

//     cout << "Enter element to search: ";
//     cin >> x;

//     int index = binarySearch(arr, n, x);

//     if (index == -1)
//         cout << "Element not found";
//     else
//         cout << "Element found at index " << index;

//     free(arr);
//     return 0;
// }




//aarushi247//Q2(c)part
// #include <iostream>
// #include <cstdlib>
// using namespace std;
// int getElement(int *arr, int n, int index) {
//     if (index < 0 || index >= n)
//         return -1;
//     return arr[index];
// }

// int main() {
//     int n, index;
//     cout << "Enter size: ";
//     cin >> n;

//     int *arr = (int*)malloc(n * sizeof(int));

//     cout << "Enter elements: ";
//     for (int i = 0; i < n; i++)
//         cin >> arr[i];

//     cout << "Enter index: ";
//     cin >> index;

//     int value = getElement(arr, n, index);

//     if (value == -1)
//         cout << "Invalid index";
//     else
//         cout << "Element = " << value;

//     free(arr);
//     return 0;
// }







//aarushi247//Q2(d)part
// #include <iostream>
// #include <cstdlib>
// using namespace std;
// int* setElement(int *arr, int n, int index, int x) {
//     if (index >= 0 && index < n)
//         arr[index] = x;
//     return arr;
// }

// int main() {
//     int n, index, x;
//     cout << "Enter size: ";
//     cin >> n;

//     int *arr = (int*)malloc(n * sizeof(int));

//     cout << "Enter elements: ";
//     for (int i = 0; i < n; i++)
//         cin >> arr[i];

//     cout << "Enter index: ";
//     cin >> index;
//     cout << "Enter new value: ";
//     cin >> x;

//     arr = setElement(arr, n, index, x);

//     cout << "Updated array: ";
//     for (int i = 0; i < n; i++)
//         cout << arr[i] << " ";

//     free(arr);
//     return 0;
// }




//aarushi247//Q2(e)part
// #include <iostream>
// #include <cstdlib>
// using namespace std;
// int findMax(int *arr, int n) {
//     int max = arr[0];
//     for (int i = 1; i < n; i++) {
//         if (arr[i] > max)
//             max = arr[i];
//     }
//     return max;
// }
// int main() {
//     int n;
//     cout << "Enter size of array: ";
//     cin >> n;
//     int *arr = (int*)malloc(n * sizeof(int));
//     cout << "Enter array elements: ";
//     for (int i = 0; i < n; i++) {
//         cin >> arr[i];
//     }
//     cout << "Maximum element = " << findMax(arr, n);
//     free(arr);
//     return 0;
// }




// //aarushi247//Q2(f)part
// #include <iostream>
// #include <cstdlib>
// using namespace std;
// int findMin(int *arr, int n) {
//     int min = arr[0];
//     for (int i = 1; i < n; i++)
//         if (arr[i] < min)
//             min = arr[i];
//     return min;
// }
// int main() {
//     int n;
//     cout << "Enter size of array: ";
//     cin >> n;
//     int *arr = (int*)malloc(n * sizeof(int));

//     cout << "Enter array elements: ";
//     for (int i = 0; i < n; i++) {
//         cin >> arr[i];
//     }

//     cout << "Minimum element = " << findMin(arr, n);
//     free(arr);
//     return 0;
// }





//aarushi247//Q2(g)part
// #include <iostream>
// using namespace std;
// int* reverseArray(int *arr, int n) {
//     int temp;
//     for (int i = 0; i < n / 2; i++) {
//         temp = arr[i];
//         arr[i] = arr[n - i - 1];
//         arr[n - i - 1] = temp;
//     }
//     return arr;
// }
// int main() {
//     int n;
//     cout << "Enter size of array: ";
//     cin >> n;
//     int arr[100];
//     cout << "Enter elements: ";
//     for (int i = 0; i < n; i++) {
//         cin >> arr[i];
//     }
//     int *result = reverseArray(arr, n);
//     cout << "Reversed array: ";
//     for (int i = 0; i < n; i++) {
//         cout << result[i] << " ";
//     }
//     return 0;
// }


//aarushi247//Q2(h)part
// #include <iostream>
// using namespace std;
// int* shiftLeft(int *arr, int n) {
//     for (int i = 0; i < n - 1; i++)
//         arr[i] = arr[i + 1];
//     arr[n - 1] = 0;
//     return arr;
// }
// int main() {
//     int n;
//     cout << "Enter size of array: ";
//     cin >> n;
//     int arr[100];
//     cout << "Enter elements: ";
//     for (int i = 0; i < n; i++) {
//         cin >> arr[i];
//     }
//    int *result = shiftLeft(arr, n);
//     cout << "Array after left shift: ";
//     for (int i = 0; i < n; i++) {
//         cout << result[i] << " ";
//     }
//     return 0;
// }


//aarushi247//Q2(i)part
#include <iostream>
using namespace std;
int* rotateLeft(int *arr, int n) {
    int first = arr[0];
    for (int i = 0; i < n - 1; i++)
        arr[i] = arr[i + 1];
    arr[n - 1] = first;
    return arr;
}
int main() {
    int n;
    cout << "Enter size of array: ";
    cin >> n;
    int arr[100];
    cout << "Enter elements: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    int *result = rotateLeft(arr, n);
    cout << "Array after left rotation: ";
    for (int i = 0; i < n; i++) {
        cout << result[i] << " ";
    }
    return 0;
}
