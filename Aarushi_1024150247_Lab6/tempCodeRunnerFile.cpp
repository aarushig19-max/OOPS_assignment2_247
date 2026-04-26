#include <iostream>
// using namespace std;

// int main()
// {
//     int arr[10] = {64, 25, 12, 22, 11, 90, 55, 43, 88, 19};  // given array
//     int n = 10;        // size
//     int key = 88;      // element to search
//     int i;
//     int comparisons = 0;   // count comparisons
//     int found = -1;        // to store position

//     // Linear Search
//     for(i = 0; i < n; i++)
//     {
//         comparisons++;         // increase comparison count

//         if(arr[i] == key)     // check element
//         {
//             found = i;        // store index
//             break;            // stop loop
//         }
//     }

//     if(found != -1)
//         cout << "Element found at index: " << found << endl;
//     else
//         cout << "Element not found\n";

//     cout << "Comparisons: " << comparisons << endl;

//     return 0;
// }