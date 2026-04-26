//NAME:aarushi gupta//1024150247//
//Implement Sorting Algorithms//
//acknowledgement: conceptual help from textbook,leetcode,GeeksforGeeks,hackerRank//

//bubble sort//
// #include <iostream>
// using namespace std;

// void bubbleSort(int arr[], int n, int &swaps)
// {
//     int i, j, temp;

//     for(i = 0; i < n-1; i++)
//     {
//         for(j = 0; j < n-i-1; j++)
//         {
//             if(arr[j] > arr[j+1])
//             {
//                 temp = arr[j];
//                 arr[j] = arr[j+1];
//                 arr[j+1] = temp;
//                 swaps++;
//             }
//         }
//     }
// }

// int main()
// {
//     int arr[100000];     // array
//     int n = 100000;      // size
//     int i, exp;
//     int swaps;

//     for(exp = 1; exp <= 10; exp++)
//     {
//         for(i = 0; i < n; i++)
//             arr[i] = rand() % 10000000 + 1;   // random values

//         swaps = 0;

//         bubbleSort(arr, n, swaps);

//         cout << "Experiment " << exp << endl;
//         cout << "Swaps: " << swaps << endl;
//         cout << "----------------\n";
//     }

//     return 0;
// }




// //insertion sort//
// #include <iostream>
// using namespace std;

// void insertionSort(int arr[], int n, int &swaps)
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
//             swaps++;
//         }

//         arr[j+1] = key;
//     }
// }

// int main()
// {
//     int arr[100000], n = 100000;
//     int i, exp, swaps;

//     for(exp = 1; exp <= 10; exp++)
//     {
//         for(i = 0; i < n; i++)
//             arr[i] = rand() % 10000000 + 1;

//         swaps = 0;

//         insertionSort(arr, n, swaps);

//         cout << "Experiment " << exp << endl;
//         cout << "Swaps: " << swaps << endl;
//         cout << "----------------\n";
//     }

//     return 0;
// }




// //selection sort//
// #include <iostream>
// using namespace std;

// void selectionSort(int arr[], int n, int &swaps)
// {
//     int i, j, min, temp;

//     for(i = 0; i < n-1; i++)
//     {
//         min = i;

//         for(j = i+1; j < n; j++)
//         {
//             if(arr[j] < arr[min])
//                 min = j;
//         }

//         temp = arr[i];
//         arr[i] = arr[min];
//         arr[min] = temp;
//         swaps++;
//     }
// }

// int main()
// {
//     int arr[100000], n = 100000;
//     int i, exp, swaps;

//     for(exp = 1; exp <= 10; exp++)
//     {
//         for(i = 0; i < n; i++)
//             arr[i] = rand() % 10000000 + 1;

//         swaps = 0;

//         selectionSort(arr, n, swaps);

//         cout << "Experiment " << exp << endl;
//         cout << "Swaps: " << swaps << endl;
//         cout << "----------------\n";
//     }

//     return 0;
// }




// //quick sort//
// #include <iostream>
// using namespace std;
// int partition(int arr[], int low, int high)
// {
//     int pivot = arr[high];   // take last element as pivot
//     int i = low - 1;         // index of smaller element
//     int j, temp;

//     for(j = low; j < high; j++)   // loop through array
//     {
//         if(arr[j] < pivot)        // if element smaller than pivot
//         {
//             i++;                  // increase index
//             temp = arr[i];        // swap
//             arr[i] = arr[j];
//             arr[j] = temp;
//         }
//     }
//     temp = arr[i+1];
//     arr[i+1] = arr[high];
//     arr[high] = temp;

//     return i+1;  
// }

// void quickSort(int arr[], int low, int high)
// {
//     if(low < high)   // condition
//     {
//         int pi = partition(arr, low, high);  // get pivot index

//         quickSort(arr, low, pi-1);   // left side
//         quickSort(arr, pi+1, high);  // right side
//     }
// }
// int main()
// {
//     int arr[100000];     // array
//     int n = 100000;      // size
//     int i, exp;

//     for(exp = 1; exp <= 10; exp++)   // 10 experiments
//     {
//         // generate random array
//         for(i = 0; i < n; i++)
//             arr[i] = rand() % 10000000 + 1;

//         quickSort(arr, 0, n-1);   // call quick sort

//         cout << "Experiment " << exp << " done" << endl;
//     }

//     return 0;
// }


// //merge sort//
// #include <iostream>
// using namespace std;
// void merge(int arr[], int low, int mid, int high)
// {
//     int i = low;          // start of left part
//     int j = mid + 1;      // start of right part
//     int k = low;          // index for temp array

//     int temp[100000];    

//     // compare elements of both parts
//     while(i <= mid && j <= high)
//     {
//         if(arr[i] < arr[j])    // smaller element
//         {
//             temp[k] = arr[i];  // copy to temp
//             i++;
//         }
//         else
//         {
//             temp[k] = arr[j];
//             j++;
//         }
//         k++;
//     }

//     // copy remaining left part
//     while(i <= mid)
//     {
//         temp[k] = arr[i];
//         i++;
//         k++;
//     }

//     // copy remaining right part
//     while(j <= high)
//     {
//         temp[k] = arr[j];
//         j++;
//         k++;
//     }

//     // copy back to original array
//     for(i = low; i <= high; i++)
//     {
//         arr[i] = temp[i];
//     }
// }
// void mergeSort(int arr[], int low, int high)
// {
//     if(low < high)   // condition
//     {
//         int mid = (low + high) / 2;   // find middle

//         mergeSort(arr, low, mid);     // left part
//         mergeSort(arr, mid+1, high);  // right part

//         merge(arr, low, mid, high);   // merge both
//     }
// }
// int main()
// {
//     int arr[100000];     // array
//     int n = 100000;      // size
//     int i, exp;

//     for(exp = 1; exp <= 10; exp++)   // 10 experiments
//     {
//         for(i = 0; i < n; i++)
//             arr[i] = rand() % 10000000 + 1;

//         mergeSort(arr, 0, n-1);   // call merge sort
//          cout << "Experiment " << exp << " done" << endl;
//     }
//     return 0;
// }

// //heap sort//
// #include <iostream>
// using namespace std;

// // Heapify function
// void heapify(int arr[], int n, int i, int &swaps)
// {
//     int largest = i;         
//     int left = 2*i + 1;        // left 
//     int right = 2*i + 2;       // right 
//     int temp;

//     // if left child is larger
//     if(left < n && arr[left] > arr[largest])
//         largest = left;

//     // if right child is larger
//     if(right < n && arr[right] > arr[largest])
//         largest = right;

//     // if largest is not root
//     if(largest != i)
//     {
//         temp = arr[i];          // swap
//         arr[i] = arr[largest];
//         arr[largest] = temp;
//         swaps++;              

//         heapify(arr, n, largest, swaps); 
//     }
// }

// // Heap S function
// void heapSort(int arr[], int n, int &swaps)
// {
//     int i, temp;

//     for(i = n/2 - 1; i >= 0; i--)
//         heapify(arr, n, i, swaps);

//     // Extract elements one by one
//     for(i = n - 1; i > 0; i--)
//     {
//         temp = arr[0];      // swap first and last
//         arr[0] = arr[i];
//         arr[i] = temp;
//         swaps++;

//         heapify(arr, i, 0, swaps);  
//     }
// }
// int main()
// {
//     int arr[100000], n = 100000;
//     int i, exp, swaps;

//     for(exp = 1; exp <= 10; exp++)
//     {
//         for(i = 0; i < n; i++)
//             arr[i] = rand() % 10000000 + 1;   // random values

//         swaps = 0;
//         heapSort(arr, n, swaps);

//         cout << "Experiment " << exp << endl;
//         cout << "Swaps: " << swaps << endl;
//         cout << "-----------------\n";
//     }
//      return 0;
// }


// //radix sort//
// #include <iostream>
// using namespace std;

// //  maximum element
// int getMax(int arr[], int n)
// {
//     int max = arr[0];
//     for(int i = 1; i < n; i++)
//     {
//         if(arr[i] > max)
//             max = arr[i];
//     }
//     return max;
// }

// // Counting sort for a digit
// void countingSort(int arr[], int n, int place, int &moves)
// {
//     int output[100000];   // temporary array
//     int count[10] = {0};  
//     int i;

//     // Count digits
//     for(i = 0; i < n; i++)
//         count[(arr[i] / place) % 10]++;

//     // Update count
//     for(i = 1; i < 10; i++)
//         count[i] += count[i - 1];

//     // Build output array
//     for(i = n - 1; i >= 0; i--)
//     {
//         output[count[(arr[i] / place) % 10] - 1] = arr[i];
//         count[(arr[i] / place) % 10]--;
//         moves++;
//     }

//     // Copy back to array
//     for(i = 0; i < n; i++)
//         arr[i] = output[i];
// }
// void radixSort(int arr[], int n, int &moves)
// {
//     int max = getMax(arr, n);

//     for(int place = 1; max/place > 0; place *= 10)
//         countingSort(arr, n, place, moves);
// }

// int main()
// {
//     int arr[100000], n = 100000;
//     int i, exp, moves;

//     for(exp = 1; exp <= 10; exp++)
//     {
//         for(i = 0; i < n; i++)
//             arr[i] = rand() % 10000000 + 1;

//         moves = 0;

//         radixSort(arr, n, moves);

//         cout << "Experiment " << exp << endl;
//         cout << "Moves: " << moves << endl;
//         cout << "-----------------\n";
//     }

//     return 0;
// }


// //shell sort//
#include <iostream>
using namespace std;
void shellSort(int arr[], int n, int &swaps)
{
    int gap, i, j, temp;

    for(gap = n/2; gap > 0; gap = gap/2)
    {
        for(i = gap; i < n; i++)
        {
            temp = arr[i];   
            j = i;

            while(j >= gap && arr[j-gap] > temp)
            {
                arr[j] = arr[j-gap];   // shift element
                j = j - gap;
                swaps++;               // count shift
            }

            arr[j] = temp;   // place element
        }
    }
}

int main()
{
    int arr[100000], n = 100000;
    int i, exp, swaps;

    for(exp = 1; exp <= 10; exp++)   // 10 experiments
    {
        // generate random values
        for(i = 0; i < n; i++)
            arr[i] = rand() % 10000000 + 1;

        swaps = 0;

        shellSort(arr, n, swaps);  

        cout << "Experiment " << exp << endl;
        cout << "Swaps: " << swaps << endl;
        cout << "-----------------\n";
    }

    return 0;
}