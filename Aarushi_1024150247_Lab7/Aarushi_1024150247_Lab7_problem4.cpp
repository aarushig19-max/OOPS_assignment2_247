//NAME:aarushi gupta//1024150247//
//Computation of Combinations using Divide & Conquer//
//acknowledgement: conceptual help from textbook,leetcode,GeeksforGeeks,hackerRank//
#include<iostream>
using namespace std;
int nCr(int n, int r)
{
    if(r==0 || r==n)
    return 1;

    return nCr(n-1,r-1) + nCr(n-1,r);
}
int main(){
    int n,r;
    cout << "enter n: ";
    cin >> n;
    cout << "enter r: ";
    cin >> r;
    cout << "result :" << nCr(n,r);
    return 0;
}

