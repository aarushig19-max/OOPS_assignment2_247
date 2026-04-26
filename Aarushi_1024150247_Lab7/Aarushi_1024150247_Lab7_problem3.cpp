//NAME:aarushi gupta//1024150247//
//Fractional Knapsack Problem Using Greedy Approach//
//acknowledgement: conceptual help from textbook,leetcode,GeeksforGeeks,hackerRank//
#include <iostream>
using namespace std;

int main() {
    int profit[] = {60, 100, 120};
    int weight[] = {10, 20, 30};
    int n = 3;
    int capacity = 50;

    float ratio[10];

    for(int i = 0; i < n; i++) {
        ratio[i] = (float)profit[i] / weight[i];
    }

    // Sort
    for(int i = 0; i < n-1; i++) {
        for(int j = 0; j < n-i-1; j++) {
            if(ratio[j] < ratio[j+1]) {

                // swap 
                float temp = ratio[j];
                ratio[j] = ratio[j+1];
                ratio[j+1] = temp;

                int t1 = profit[j];
                profit[j] = profit[j+1];
                profit[j+1] = t1;

                
                int t2 = weight[j];
                weight[j] = weight[j+1];
                weight[j+1] = t2;
            }
        }
    }

    float totalProfit = 0;

    //  knapsack
    for(int i = 0; i < n; i++) {
        if(capacity >= weight[i]) {
            totalProfit += profit[i];
            capacity -= weight[i];
        } else {
            totalProfit += ratio[i] * capacity;
            break;
        }
    }

    cout << "Maximum Profit: " << totalProfit;
    return 0;
}