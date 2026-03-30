//NAME:aarushi gupta//1024150247//
//Implement a priority queue//
//acknowledgement: conceptual help from textbook,leetcode,GeeksforGeeks,hackerRank//
#include <iostream>
using namespace std;

int queue[50];
int maxSize = 5;
int count = -1;

// isEmpty //
int isEmpty()
{
    if (count == -1)
        return 1;
    else
        return 0;
}

// isFull //
int isFull()
{
    if (count == maxSize - 1)
        return 1;
    else
        return 0;
}

// ENQUEUE //
void enqueue(int x)
{
    if (isFull())
    {
        cout << "Queue Full" << endl;
        return;
    }

    int i;
    count++;

    // arrange elements
    for (i = count; i > 0 && queue[i - 1] < x; i--)
    {
        queue[i] = queue[i - 1];
    }

    queue[i] = x;
    cout << "Inserted: " << x << endl;
}
 // DEQUEUE //
int dequeue()
{
    if (isEmpty())
    {
        cout << "Queue Empty" << endl;
        return 0;
    }

    int x = queue[0];

    for (int i = 0; i < count; i++)
        queue[i] = queue[i + 1];

    count--;
    return x;
}

// DISPLAY //
void display()
{
    if (isEmpty())
    {
        cout << "Queue Empty" << endl;
        return;
    }

    cout << "Queue elements: ";
    for (int i = 0; i <= count; i++)
        cout << queue[i] << " ";
    cout << endl;
}

int main()
{
    enqueue(10);
    enqueue(30);
    enqueue(20);
    enqueue(40);
    enqueue(25);

    display();

    cout << "Removed: " << dequeue() << endl;
    cout << "Removed: " << dequeue() << endl;

    display();

    return 0;
}