//NAME:aarushi gupta//1024150247//
//Consider the following recurrence relations and analyze their time complexity.
//acknowledgement: conceptual help from textbook,leetcode,GeeksforGeeks,hackerRank//
#include<iostream>
using namespace std;

// T(n) = T(n-1) + 1
int A(int n)
{
    if(n==1)
        return 1;

    return A(n-1) + 1;
}

// T(n) = T(n-1) + n
int B(int n)
{
    if(n==1)
        return 1;

    return B(n-1) + n;
}

// T(n) = T(n-1) + n*n
int C(int n)
{
    if(n==1)
        return 1;

    return C(n-1) + n*n;
}

// Log type
int D(int n)
{
    if(n<=1)
        return 1;

    return D(n/2) + 1;
}

int main()
{
    int n;

    cout<<"n   A   B   C   D"<<endl;

    for(n=1;n<=10;n++)
    {
        cout<<n<<"   "
            <<A(n)<<"   "
            <<B(n)<<"   "
            <<C(n)<<"   "
            <<D(n)<<endl;
    }

    return 0;
}