//NAME:aarushi gupta//1024150247//
//implement the conversion of an infix to a postfix expression using a stack//
//acknowledgement: conceptual help from textbook,leetcode,GeeksforGeeks,hackerRank//
#include <iostream>
using namespace std;

struct Node
{
    char data;
    Node* next;
};

Node* top = NULL;

// PUSH //
void push(char x)
{
    Node* newNode = new Node;
    newNode->data = x;
    newNode->next = top;
    top = newNode;
}

// POP //
char pop()
{
    if (top == NULL)
        return '\0';
    else
    {
        Node* temp = top;
        char x = temp->data;
        top = temp->next;
        delete temp;
        return x;
    }
}

// precedence function //
int precedence(char ch)
{
    if (ch == '*' || ch == '/')
        return 2;
    else if (ch == '+' || ch == '-')
        return 1;
    else
        return 0;
}

int main()
{
    char infix[50], postfix[50];
    int i = 0, j = 0;
    char ch;

    cout << "Enter infix expression: ";
    cin >> infix;

    while (infix[i] != '\0')
    {
        ch = infix[i];

        // Operand
        if ((ch >= 'A' && ch <= 'Z') || (ch >= 'a' && ch <= 'z'))
        {
            postfix[j++] = ch;
        }
        else if (ch == '(')
        {
            push(ch);
        }
        else if (ch == ')')
        {
            while (top != NULL && top->data != '(')
            {
                postfix[j++] = pop();
            }
            pop(); 
        }
        // Operator
        else
        {
            while (top != NULL && precedence(top->data) >= precedence(ch))
            {
                postfix[j++] = pop();
            }
            push(ch);
        }
        i++;
    }

    // Pop remaining operators//
    while (top != NULL)
    {
        postfix[j++] = pop();
    }

    postfix[j] = '\0';

    cout << "Postfix expression: " << postfix << endl;

    return 0;
}