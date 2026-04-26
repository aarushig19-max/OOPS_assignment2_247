//NAME:aarushi gupta//1024150247//
//Subset Sum Problem Using Brute Force//
//acknowledgement: conceptual help from textbook,leetcode,GeeksforGeeks,hackerRank//
#include <iostream>
using namespace std;

int main() {
    int arr[] = {3, 34, 4, 12, 5, 2};
    int n = 6;
    int target = 9;

    int total = 1 << n;   // 2^n subsets
    int found = 0;        // 0 = False, 1 = True

    for(int i = 0; i < total; i++) {
        int sum = 0;
        for(int j = 0; j < n; j++) {
            if(i & (1 << j)) {
                sum += arr[j];
            }
        }
        if(sum == target) {
            found = 1;
            break;   
        }
    }

    if(found == 1)
        cout << "True";
    else
        cout << "False";

    return 0;
}


















