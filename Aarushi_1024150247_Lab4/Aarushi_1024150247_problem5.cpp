//NAME:aarushi gupta//1024150247//
//Implement a queue using two stacks only//
//acknowledgement: conceptual help from textbook,leetcode,GeeksforGeeks,hackerRank//
#include <iostream>
using namespace std;

int forwardStack[50];
int reverseStack[50];

int top1 = -1;   // forward stack 
int top2 = -1;   // reverse stack 
int size = 5;

// isEmpty //
int isEmpty()
{
    if (top1 == -1 && top2 == -1)
        return 1;
    else
        return 0;
}

// isFull //
int isFull()
{
    if (top1 == size - 1)
        return 1;
    else
        return 0;
}

// ENQUEUE //
void enqueue(int x)
{
    try
    {
        if (isFull())
            throw x;
        else
        {
            top1++;
            forwardStack[top1] = x;
            cout << "Inserted: " << x << endl;
        }
    }
    catch (int)
    {
        cout << "Queue Overflow" << endl;
    }
}

// DEQUEUE //
int dequeue()
{
    try
    {
        if (isEmpty())
            throw 0;
        if (top2 == -1)
        {
            while (top1 != -1)
            {
                top2++;
                reverseStack[top2] = forwardStack[top1];
                top1--;
            }
        }
        int x = reverseStack[top2];
        top2--;
        return x;
    }
    catch (int)
    {
        cout << "Queue Underflow" << endl;
        return 0;
    }
}

// DISPLAY QUEUE //
void display()
{
    if (isEmpty())
    {
        cout << "Queue is Empty" << endl;
        return;
    }

    cout << "Queue elements: ";

    //  reverse stack
    for (int i = top2; i >= 0; i--)
        cout << reverseStack[i] << " ";

    //  forward stack
    for (int i = 0; i <= top1; i++)
        cout << forwardStack[i] << " ";

    cout << endl;
}

int main()
{
    enqueue(10);
    enqueue(20);
    enqueue(30);
    enqueue(40);
    enqueue(50);

    display();

    cout << "Deleted: " << dequeue() << endl;
    cout << "Deleted: " << dequeue() << endl;

    display();

    return 0;
}