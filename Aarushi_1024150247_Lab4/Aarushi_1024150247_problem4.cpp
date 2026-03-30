//NAME:aarushi gupta//1024150247//
//Design a queue system to manage vehicles at a traffic signal//
//acknowledgement: conceptual help from textbook,leetcode,GeeksforGeeks,hackerRank//
#include <iostream>
using namespace std;

struct Node
{
    int data;      // vehicle number
    Node* next;
};

Node* front = NULL;
Node* rear = NULL;

//insert vehicle //
void enqueue(int x)
{
    Node* newNode = new Node;
    newNode->data = x;
    newNode->next = NULL;

    if (front == NULL)
    {
        front = rear = newNode;
    }
    else
    {
        rear->next = newNode;
        rear = newNode;
    }
}

//remove vehicle //
int dequeue()
{
    int x;
    if (front == NULL)
    {
        cout << "Queue Empty" << endl;
        return 0;
    }
    else
    {
        Node* temp = front;
        x = temp->data;
        front = front->next;
        delete temp;
        return x;
    }
}

// DISPLAY vehicles //
void display()
{
    Node* temp = front;

    if (temp == NULL)
        cout << "No vehicles" << endl;
    else
    {
        cout << "Vehicles: ";
        while (temp != NULL)
        {
            cout << temp->data << " ";
            temp = temp->next;
        }
        cout << endl;
    }
}

int main()
{
    // Insert 5 vehicles //
    enqueue(1);
    enqueue(2);
    enqueue(3);
    enqueue(4);
    enqueue(5);

    display();

    // Serve 3 vehicles //
    cout << "Served: " << dequeue() << endl;
    cout << "Served: " << dequeue() << endl;
    cout << "Served: " << dequeue() << endl;

    display();

    return 0;
}