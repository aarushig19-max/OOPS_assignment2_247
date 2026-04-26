//NAME:aarushi gupta//1024150247//
//Design a stack system to manage plates in a cafeteria using the Last-In-First Out (LIFO) principle//
//acknowledgement: conceptual help from textbook,leetcode,GeeksforGeeks,hackerRank//
#include <iostream>
using namespace std;

struct Node
{
    int data;        // plate number
    Node* next;
};

Node* top = NULL;

// PUSH : insert plate //
void push(int plate)
{
    Node* newNode = new Node;
    newNode->data = plate;
    newNode->next = top;
    top = newNode;
}

// POP : remove plate //
int pop()
{
    int plate;
    if (top == NULL)
    {
        cout << "No plates (Underflow)" << endl;
        return 0;
    }
    else
    {
        Node* temp = top;
        plate = temp->data;
        top = temp->next;
        delete temp;
        return plate;
    }
}

// DISPLAY plates //
void display()
{
    if (top == NULL)
        cout << "No plates in stack" << endl;
    else
    {
        Node* temp = top;
        cout << "Plates: ";
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
    // Insert 5 plates //
    push(1);
    push(2);
    push(3);
    push(4);
    push(5);

    display();

    // Remove 3 plates //
    cout << "Removed plate: " << pop() << endl;
    cout << "Removed plate: " << pop() << endl;
    cout << "Removed plate: " << pop() << endl;

    display();

    return 0;
}