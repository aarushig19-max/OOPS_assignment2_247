//NAME:aarushi gupta//1024150247//
//Problem 1. Tower of Hanoi:
//acknowledgement: conceptual help from textbook,leetcode,GeeksforGeeks,hackerRank//
// #include<iostream>
// using namespace std;

// void hanoi(int n, char A, char B, char C)
// {
//     if(n==1)
//     {
//         cout<<"Move disk 1 from "<<A<<" to "<<C<<endl;
//         return;
//     }

//     hanoi(n-1, A, C, B);

//     cout<<"Move disk "<<n<<" from "<<A<<" to "<<C<<endl;

//     hanoi(n-1, B, A, C);
// }

// int main()
// {
//     int n;

//     cout<<"Enter number of disks: ";
//     cin>>n;

//     hanoi(n,'A','B','C');

//     return 0;
// }





//NAME:aarushi gupta//1024150247//
//Problem 2. Fibonacci Series:
//acknowledgement: conceptual help from textbook,leetcode,GeeksforGeeks,hackerRank//
// #include<iostream>
// using namespace std;

// int fib(int n)
// {
//     if(n==0)
//         return 0;

//     if(n==1)
//         return 1;

//     return fib(n-1) + fib(n-2);
// }

// int main()
// {
//     int n,i;

//     cout<<"Enter n: ";
//     cin>>n;

//     for(i=0;i<n;i++)
//     {
//         cout<<fib(i)<<" ";
//     }

//     return 0;
// }



//NAME:aarushi gupta//1024150247//
//Problem 3. Staircase Problem:
//acknowledgement: conceptual help from textbook,leetcode,GeeksforGeeks,hackerRank//
// #include<iostream>
// using namespace std;

// int stairs(int n)
// {
//     if(n==1)
//         return 1;

//     if(n==2)
//         return 2;

//     return stairs(n-1) + stairs(n-2);
// }

// int main()
// {
//     int n;

//     cout<<"Enter number of steps: ";
//     cin>>n;

//     cout<<"Total ways = "<<stairs(n);

//     return 0;
// }








//NAME:aarushi gupta//1024150247//
//Problem 4. Bitstrings Without Consecutive Zeros:
//acknowledgement: conceptual help from textbook,leetcode,GeeksforGeeks,hackerRank//
#include<iostream>
using namespace std;

int bits(int n)
{
    if(n==1)
        return 2;

    if(n==2)
        return 3;

    return bits(n-1) + bits(n-2);
}

int main()
{
    int n;

    cout<<"Enter length of bitstring: ";
    cin>>n;

    cout<<"Number of valid strings = "<<bits(n);

    return 0;
}