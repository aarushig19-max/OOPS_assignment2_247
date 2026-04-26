//NAME:aarushi gupta//1024150247//
//Real-World Application-Based Scenarios//
//a. Nearly Sorted Data//
//acknowledgement: conceptual help from textbook,leetcode,GeeksforGeeks,hackerRank//
// #include <iostream>
// using namespace std;

// void insertionSort(int arr[], int n)
// {
//     int i, j, key;

//     for(i = 1; i < n; i++)
//     {
//         key = arr[i];
//         j = i - 1;

//         while(j >= 0 && arr[j] > key)
//         {
//             arr[j+1] = arr[j];
//             j--;
//         }
//         arr[j+1] = key;
//     }
// }

// int main()
// {
//     int arr[10] = {1,2,3,5,4,6,7,8,9,10}; // nearly sorted
//     int n = 10;

//     insertionSort(arr, n);

//     for(int i = 0; i < n; i++)
//         cout << arr[i] << " ";

//     return 0;
// }

// //b. Handling Large Datasets//
// #include <iostream>
// using namespace std;

// // Partition function
// int partition(int arr[], int low, int high)
// {
//     int pivot = arr[high];   // last element as pivot
//     int i = low - 1;
//     int j, temp;

//     for(j = low; j < high; j++)
//     {
//         if(arr[j] < pivot)
//         {
//             i++;
//             temp = arr[i];   // swap
//             arr[i] = arr[j];
//             arr[j] = temp;
//         }
//     }

//     temp = arr[i+1];         // place pivot
//     arr[i+1] = arr[high];
//     arr[high] = temp;

//     return i+1;
// }
// void quickSort(int arr[], int low, int high)
// {
//     if(low < high)
//     {
//         int pi = partition(arr, low, high);

//         quickSort(arr, low, pi-1);   // left
//         quickSort(arr, pi+1, high);  // right
//     }
// }
// int main()
// {
//     int arr[10] = {64, 25, 12, 22, 11, 90, 55, 43, 88, 19};
//     int n = 10;

//     quickSort(arr, 0, n-1);   // call sort

//     cout << "Sorted array:\n";
//     for(int i = 0; i < n; i++)
//         cout << arr[i] << " ";
//     return 0;
// }


// //c. Priority-Based Processing//
// #include <iostream>
// using namespace std;

// void heapify(int arr[], int n, int i)
// {
//     int largest = i;
//     int left = 2*i + 1;
//     int right = 2*i + 2;
//     int temp;

//     if(left < n && arr[left] > arr[largest])
//         largest = left;

//     if(right < n && arr[right] > arr[largest])
//         largest = right;

//     if(largest != i)
//     {
//         temp = arr[i];
//         arr[i] = arr[largest];
//         arr[largest] = temp;
//         heapify(arr, n, largest);
//     }
// }

// void heapSort(int arr[], int n)
// {
//     for(int i = n/2 - 1; i >= 0; i--)
//         heapify(arr, n, i);

//     for(int i = n-1; i > 0; i--)
//     {
//         int temp = arr[0];
//         arr[0] = arr[i];
//         arr[i] = temp;
//         heapify(arr, i, 0);
//     }
// }
// int main()
// {
//     int arr[5] = {3,5,1,4,2}; // priority values
//     int n = 5;

//     heapSort(arr, n);

//     for(int i = 0; i < n; i++)
//         cout << arr[i] << " ";

//     return 0;
// }


// //d. Optimizing Performance with Shell Sort//
#include <iostream>
using namespace std;

void shellSort(int arr[], int n)
{
    int gap, i, j, temp;

    for(gap = n/2; gap > 0; gap /= 2)
    {
        for(i = gap; i < n; i++)
        {
            temp = arr[i];
            j = i;

            while(j >= gap && arr[j-gap] > temp)
            {
                arr[j] = arr[j-gap];
                j -= gap;
            }

            arr[j] = temp;
        }
    }
}

int main()
{
    int arr[10] = {9,8,3,7,5,6,4,1,2,10};
    int n = 10;

    shellSort(arr, n);

    for(int i = 0; i < n; i++)
        cout << arr[i] << " ";

    return 0;
}