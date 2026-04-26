// NAME:aarushi gupta//1024150247//
// Display the elements of a LL//
// acknowledgement: conceptual help from textbook,leetcode,GeeksforGeeks,hackerRank//
// #include<iostream>
// using namespace std;
// struct node
// {
//     int data;
//     node *next;
// };
// int main()
// {
//     node *head = NULL;
//     node *temp = NULL;
//     node *newNode;
//     int n;
//     cout << "enter number of nodes: ";
//     cin >> n;
//     for(int i=0; i<n; i++)
//     {
//         newNode = new node;
//         cout << "enter data for node" << i+1 ;
//         cin >> newNode->data;
//         newNode->next = NULL;
//         //if list empty//
//         if(head == NULL)
//         {
//             head = newNode;
//             temp = head;
//         }
//         else{
//             temp->next = newNode;
//             temp = newNode;
//         }
//     }
//     //display//
//     temp = head;
//     cout << "\n Linked list: ";
//     while(temp!=NULL)
//     {
//         cout << temp->data;
//         temp = temp->next;
//     }
//     cout << "NULL";
//     return 0;
// }


// NAME:aarushi gupta//1024150247//
// Count and sum the nodes of a LL//
// acknowledgement: conceptual help from textbook,leetcode,GeeksforGeeks,hackerRank//
// #include <iostream>
// using namespace std;

// struct node
// {
//     int data;
//     node *next;
// };

// int main()
// {
//     node *head = NULL;
//     node *temp = NULL;
//     node *newNode;
//     int n, count = 0, sum = 0;

//     cout << "Enter number of nodes: ";
//     cin >> n;

//     // list created
//     for (int i = 0; i < n; i++)
//     {
//         newNode = new node;

//         cout << "Enter data: ";
//         cin >> newNode->data;

//         newNode->next = NULL;

//         if (head == NULL)
//         {
//             head = newNode;
//             temp = head;
//         }
//         else
//         {
//             temp->next = newNode;
//             temp = newNode;
//         }
//     }

//     //  count and sum
//     temp = head;
//     while (temp != NULL)
//     {
//         count++;
//         sum = sum + temp->data;
//         temp = temp->next;
//     }

//     cout << "\nCount = " << count;
//     cout << "\nSum = " << sum;

//     return 0;
// }





// NAME:aarushi gupta//1024150247//
// Search for a key element in a LL//
// acknowledgement: conceptual help from textbook,leetcode,GeeksforGeeks,hackerRank//
// #include <iostream>
// using namespace std;

// struct node
// {
//     int data;
//     node *next;
// };

// int main()
// {
//     node *head = NULL;
//     node *temp = NULL;
//     node *newNode;
//     int n, searchValue, index = 1;

//     cout << "Enter number of nodes: ";
//     cin >> n;

//     // linked list created
//     for (int i = 0; i < n; i++)
//     {
//         newNode = new node;

//         cout << "Enter data: ";
//         cin >> newNode->data;

//         newNode->next = NULL;

//         if (head == NULL)
//         {
//             head = newNode;
//             temp = head;
//         }
//         else
//         {
//             temp->next = newNode;
//             temp = newNode;
//         }
//     }

//     cout << "Enter element to search: ";
//     cin >> searchValue;

//     // to search element
//     temp = head;
//     while (temp != NULL)
//     {
//         if (temp->data == searchValue)
//         {
//             cout << "Element found at position " << index;
//             return 0;
//         }
//         index++;
//         temp = temp->next;
//     }

//     cout << "Element not found";

//     return 0;
// }




// NAME:aarushi gupta//1024150247//
// Delete an element from a LL//
// acknowledgement: conceptual help from textbook,leetcode,GeeksforGeeks,hackerRank//
// #include <iostream>
// using namespace std;

// struct node
// {
//     int data;
//     node *next;
// };

// int main()
// {
//     node *head = NULL;
//     node *temp = NULL;
//     node *newNode;
//     node *prev;
//     int n, deleteValue;

//     cout << "Enter number of nodes: ";
//     cin >> n;

//     for (int i = 0; i < n; i++)
//     {
//         newNode = new node;
//         cin >> newNode->data;
//         newNode->next = NULL;

//         if (head == NULL)
//         {
//             head = newNode;
//             temp = newNode;
//         }
//         else
//         {
//             temp->next = newNode;
//             temp = newNode;
//         }
//     }

//     cout << "Enter element to delete: ";
//     cin >> deleteValue;

//     temp = head;
//     prev = NULL;

//     while (temp != NULL && temp->data != deleteValue)
//     {
//         prev = temp;
//         temp = temp->next;
//     }

//     if (temp == NULL)
//     {
//         cout << "Element not found";
//     }
//     else
//     {
//         if (prev == NULL)
//             head = temp->next;
//         else
//             prev->next = temp->next;

//         delete temp;
//         cout << "Element deleted";
//     }

//     return 0;
// }




// NAME:aarushi gupta//1024150247//
// Check if a LL is sorted//
// acknowledgement: conceptual help from textbook,leetcode,GeeksforGeeks,hackerRank//
// #include <iostream>
// using namespace std;

// struct node
// {
//     int data;
//     node *next;
// };

// int main()
// {
//     node *head = NULL;
//     node *temp = NULL;
//     node *newNode;
//     int n;

//     cout << "Enter number of nodes: ";
//     cin >> n;

//     for (int i = 0; i < n; i++)
//     {
//         newNode = new node;
//         cin >> newNode->data;
//         newNode->next = NULL;

//         if (head == NULL)
//         {
//             head = newNode;
//             temp = newNode;
//         }
//         else
//         {
//             temp->next = newNode;
//             temp = newNode;
//         }
//     }

//     // list sorted or not
//     temp = head;
//     while (temp->next != NULL)
//     {
//         if (temp->data > temp->next->data)
//         {
//             cout << "Not Sorted";
//             return 0;
//         }
//         temp = temp->next;
//     }

//     cout << "Sorted";
//     return 0;
// }





// NAME:aarushi gupta//1024150247//
// Merge 2 LLs//
// acknowledgement: conceptual help from textbook,leetcode,GeeksforGeeks,hackerRank//
// #include <iostream>
// #include <iostream>
// using namespace std;

// struct node
// {
//     int data;
//     node *next;
// };

// node* create()
// {
//     node *head = NULL;
//     node *temp = NULL;
//     node *nnode;
//     int n;

//     cin >> n;

//     for (int i = 0; i < n; i++)
//     {
//         nnode = new node;
//         cin >> nnode->data;
//         nnode->next = NULL;

//         if (head == NULL)
//         {
//             head = nnode;
//             temp = nnode;
//         }
//         else
//         {
//             temp->next = nnode;
//             temp = nnode;
//         }
//     }
//     return head;
// }

// int main()
// {
//     node *h1, *h2, *t;

//     cout << "Enter nodes for list1: ";
//     h1 = create();
//     cout << "Enter nodes for list2: ";
//     h2 = create();

//     t = h1;
//     while (t->next != NULL)
//         t = t->next;

//     t->next = h2;

//     t = h1;
//     while (t != NULL)
//     {
//         cout << t->data << " -> ";
//         t = t->next;
//     }
//     cout << "NULL";

//     return 0;
// }





// NAME:aarushi gupta//1024150247//
// Reverse the elements of a LL//
// acknowledgement: conceptual help from textbook,leetcode,GeeksforGeeks,hackerRank//
// Reverse elements of a Singly Linked List
// #include <iostream>
// using namespace std;

// struct node
// {
//     int data;
//     node *next;
// };

// int main()
// {
//     node *head = NULL, *temp = NULL, *newNode;
//     node *p = NULL, *q = NULL, *r = NULL;
//     int n;

//     cout << "Enter number of nodes: ";
//     cin >> n;

//     for (int i = 0; i < n; i++)
//     {
//         newNode = new node;
//         cin >> newNode->data;
//         newNode->next = NULL;

//         if (head == NULL)
//         {
//             head = newNode;
//             temp = newNode;
//         }
//         else
//         {
//             temp->next = newNode;
//             temp = newNode;
//         }
//     }

//     // Reverse linked list
//     p = head;
//     while (p != NULL)
//     {
//         r = p->next;
//         p->next = q;
//         q = p;
//         p = r;
//     }
//     head = q;

//     temp = head;
//     while (temp != NULL)
//     {
//         cout << temp->data << " -> ";
//         temp = temp->next;
//     }
//     cout << "NULL";

//     return 0;
// }


// NAME:aarushi gupta//1024150247//
// Given a Linked list, List1 = {A1 A2, . . . An–1, An} with data, write a program to re-order it//
// acknowledgement: conceptual help from textbook,leetcode,GeeksforGeeks,hackerRank//
#include <iostream>
using namespace std;

struct node
{
    int data;
    node *next;
};

int main()
{
    node *head = NULL, *temp = NULL, *newNode;
    node *first, *second, *prev = NULL, *move, *temp2;
    int n;

    cout << "Enter number of nodes: ";
    cin >> n;

    // Create linked list (insert at end)
    for (int i = 0; i < n; i++)
    {
        newNode = new node;
        cin >> newNode->data;
        newNode->next = NULL;

        if (head == NULL)
        {
            head = newNode;
            temp = newNode;
        }
        else
        {
            temp->next = newNode;
            temp = newNode;
        }
    }

    first = second = head;
    while (second->next != NULL && second->next->next != NULL)
    {
        first = first->next;
        second = second->next->next;
    }
    move = first->next;
    first->next = NULL;

    while (move != NULL)
    {
        temp2 = move->next;
        move->next = prev;
        prev = move;
        move = temp2;
    }

    // Merge both 
    temp = head;
    while (prev != NULL)
    {
        temp2 = temp->next;
        temp->next = prev;
        prev = prev->next;
        temp->next->next = temp2;
        temp = temp2;
    }

    // Display 
    temp = head;
    while (temp != NULL)
    {
        cout << temp->data << " -> ";
        temp = temp->next;
    }
    cout << "NULL";

    return 0;
}
