//NAME:aarushi gupta//1024150247//
//Create a stack structure/stack class and Implement the following stack operations//
//using both arrays and Linked List separately://
//acknowledgement: conceptual help from textbook,leetcode,GeeksforGeeks,hackerRank//
// #include <iostream>
// using namespace std;

// int stack[100];
// int top = -1;

// isEmpty //
// int isEmpty()
// {
//     if (top == -1)
//         return 1;
//     else
//         return 0;
// }

// isFull //
// int isFull(int n)
// {
//     if (top == n - 1)
//         return 1;
//     else
//         return 0;
// }

// PUSH //
// void push(int val, int n)
// {
//     if (isFull(n))
//         cout << "Overflow" << endl;
//     else
//     {
//         top = top + 1;
//         stack[top] = val;
//     }
// }

// POP //
// int pop()
// {
//     int item;
//     if (isEmpty())
//     {
//         cout << "Underflow" << endl;
//         return 0;
//     }
//     else
//     {
//         item = stack[top];
//         top = top - 1;
//         return item;
//     }
// }

// PEEK //
// int peek()
// {
//     if (isEmpty())
//     {
//         cout << "Stack is Empty" << endl;
//         return 0;
//     }
//     else
//         return stack[top];
// }

// DISPLAY //
// void display()
// {
//     if (isEmpty())
//         cout << "Stack is Empty" << endl;
//     else
//     {
//         for (int i = top; i >= 0; i--)
//             cout << stack[i] << " ";
//         cout << endl;
//     }
// }

// int main()
// {
//     int size = 5;

//     push(10, size);
//     push(20, size);
//     push(30, size);

//     display();
//     cout << "Top element: " << peek() << endl;
//     cout << "Popped element: " << pop() << endl;

//     display();

//     return 0;
// }





//using linked list//
#include <iostream>
using namespace std;

struct Node
{
    int data;
    Node* next;
};

Node* top = NULL;

// isEmpty //
int isEmpty()
{
    if (top == NULL)
        return 1;
    else
        return 0;
}

// isFull //

int isFull()
{
    return 0;
}

// PUSH //
void push(int val)
{
    Node* newNode = new Node;

    if (newNode == NULL)
        cout << "Overflow" << endl;
    else
    {
        newNode->data = val;
        newNode->next = top;
        top = newNode;
    }
}

//POP //
int pop()
{
    int item;
    if (isEmpty())
    {
        cout << "Underflow" << endl;
        return 0;
    }
    else
    {
        Node* temp = top;
        item = temp->data;
        top = temp->next;
        delete temp;
        return item;
    }
}

//PEEK //
int peek()
{
    if (isEmpty())
    {
        cout << "Stack is Empty" << endl;
        return 0;
    }
    else
        return top->data;
}

// DISPLAY //
void display()
{
    if (isEmpty())
        cout << "Stack is Empty" << endl;
    else
    {
        Node* temp = top;
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
    push(10);
    push(20);
    push(30);

    display();

    cout << "Top element: " << peek() << endl;

    cout << "Popped element: " << pop() << endl;

    display();

    return 0;
}