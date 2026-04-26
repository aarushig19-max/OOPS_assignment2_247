//NAME:aarushi gupta//1024150247//
//Quick Sort Experimentation.//
//acknowledgement: conceptual help from textbook,leetcode,GeeksforGeeks,hackerRank//
#include <iostream>
#include <cstdlib>    // for rand()
#include <ctime>      // for srand()
#include <chrono>     // for time measurement
using namespace std;
using namespace std::chrono;
int partition(int arr[], int low, int high)
{
    int pivot = arr[high];   
    int i = low - 1;
    int j, temp;

    for(j = low; j < high; j++)
    {
        if(arr[j] < pivot)
        {
            i++;
            temp = arr[i];   // swap
            arr[i] = arr[j];
            arr[j] = temp;
        }
    }

    temp = arr[i+1];         // place pivot
    arr[i+1] = arr[high];
    arr[high] = temp;

    return i+1;
}

void quickSort(int arr[], int low, int high)
{
    if(low < high)
    {
        int pi = partition(arr, low, high);

        quickSort(arr, low, pi-1);   // left
        quickSort(arr, pi+1, high);  // right
    }
}
int main()
{
    int arr[100000];
    int n = 100000;
    int i;

    srand(time(0));  
    for(i = 0; i < n; i++)
        arr[i] = rand() % 100 + 1;

    auto start = high_resolution_clock::now();   // start time

    quickSort(arr, 0, n-1);

    auto stop = high_resolution_clock::now();    // end time

    auto duration = duration_cast<microseconds>(stop - start);

    cout << "Case 1 (1-100) Time: "
         << duration.count() << " microseconds" << endl;

    for(i = 0; i < n; i++)
        arr[i] = rand() % 10000000 + 1;

    auto start2 = high_resolution_clock::now();

    quickSort(arr, 0, n-1);

    auto stop2 = high_resolution_clock::now();

    auto duration2 = duration_cast<microseconds>(stop2 - start2);

    cout << "Case 2 (1-10000000) Time: "
         << duration2.count() << " microseconds" << endl;

    return 0;
}