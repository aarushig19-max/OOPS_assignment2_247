//NAME:aarushi gupta//1024150247//
//To implement algorithms for various time complexities//
//acknowledgement: conceptual help from textbook,leetcode,GeeksforGeeks,hackerRank//
#include<iostream>
using namespace std;

int main()
{
    int n,i,j,k;

    cout<<"n  O(1)  O(n)  O(n^2)  O(n^3)"<<endl;

    for(n=1;n<=20;n++)
    {
        int c1=1;
        int c2=0;
        int c3=0;
        int c4=0;

        // O(n)
        for(i=1;i<=n;i++)
        {
            c2++;
        }

        // O(n^2)
        for(i=1;i<=n;i++)
        {
            for(j=1;j<=n;j++)
            {
                c3++;
            }
        }

        // O(n^3)
        for(i=1;i<=n;i++)
        {
            for(j=1;j<=n;j++)
            {
                for(k=1;k<=n;k++)
                {
                    c4++;
                }
            }
        }

        cout<<n<<"   "<<c1<<"   "<<c2<<"   "<<c3<<"   "<<c4<<endl;
    }

    return 0;
}