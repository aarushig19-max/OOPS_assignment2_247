//NAME:aarushi gupta//1024150247//
//Implement Linear Search and Binary Search// (a)part
//acknowledgement: conceptual help from textbook,leetcode,GeeksforGeeks,hackerRank//

//linear search//
// #include <iostream>
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

// //binary search//
#include <iostream>
using namespace std;

int main()
{
    int arr[10] = {11, 12, 19, 22, 25, 43, 55, 64, 88, 90}; // sorted array
    int n = 10;
    int key = 88;

    int low = 0, high = n-1, mid;
    int comparisons = 0;
    int found = -1;

    // Binary Search
    while(low <= high)
    {
        mid = (low + high) / 2;   // find middle
        comparisons++;            // count comparison

        if(arr[mid] == key)      // found
        {
            found = mid;
            break;
        }
        else if(arr[mid] < key)  // go right
        {
            low = mid + 1;
        }
        else                     // go left
        {
            high = mid - 1;
        }
    }

    if(found != -1)
        cout << "Element found at index: " << found << endl;
    else
        cout << "Element not found\n";

    cout << "Comparisons: " << comparisons << endl;

    return 0;
}
