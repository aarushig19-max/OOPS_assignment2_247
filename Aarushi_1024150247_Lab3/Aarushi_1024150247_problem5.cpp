// NAME:aarushi gupta//1024150247//
//Display Students://
// acknowledgement: conceptual help from textbook,leetcode,GeeksforGeeks,hackerRank//
// #include <iostream>
// using namespace std;

// struct node
// {
//     int roll;
//     node *prev;
//     node *next;
// };

// int main()
// {
//     node *head = NULL, *temp = NULL, *newNode;
//     int n;

//     cout << "Enter number of students: ";
//     cin >> n;

//     for (int i = 0; i < n; i++)
//     {
//         newNode = new node;

//         cout << "Enter Roll Number of student " << i + 1 << ": ";
//         cin >> newNode->roll;

//         newNode->next = NULL;
//         newNode->prev = NULL;

//         if (head == NULL)
//         {
//             head = newNode;
//             temp = newNode;
//         }
//         else
//         {
//             temp->next = newNode;
//             newNode->prev = temp;
//             temp = newNode;
//         }
//     }

//     cout << "\nStudents in class:\n";
//     temp = head;

//     if (head == NULL)
//         cout << "No students in the list";
//     else
//     {
//         while (temp != NULL)
//         {
//             cout << temp->roll << endl;
//             temp = temp->next;
//         }
//     }

//     return 0;
// }





// NAME:aarushi gupta//1024150247//
//Count Students//
// acknowledgement: conceptual help from textbook,leetcode,GeeksforGeeks,hackerRank//
//#include <iostream>
// using namespace std;

// struct node
// {
//     int roll;
//     node *prev;
//     node *next;
// };

// int main()
// {
//     node *head = NULL, *temp = NULL, *newNode;
//     int n, count = 0;

//     cout << "Enter number of students: ";
//     cin >> n;

//     for (int i = 0; i < n; i++)
//     {
//         newNode = new node;
//         cout << "Enter Roll Number of student " << i + 1 << ": ";
//         cin >> newNode->roll;

//         newNode->next = NULL;
//         newNode->prev = NULL;

//         if (head == NULL)
//         {
//             head = newNode;
//             temp = newNode;
//         }
//         else
//         {
//             temp->next = newNode;
//             newNode->prev = temp;
//             temp = newNode;
//         }
//     }

//     temp = head;
//     while (temp != NULL)
//     {
//         count++;
//         temp = temp->next;
//     }

//     cout << "\nTotal Students = " << count;
//     return 0;
// }





// NAME:aarushi gupta//1024150247//
//Search for Specific Student://
// acknowledgement: conceptual help from textbook,leetcode,GeeksforGeeks,hackerRank//
// #include <iostream>
// using namespace std;

// struct node
// {
//     int roll;
//     node *prev;
//     node *next;
// };

// int main()
// {
//     node *head = NULL, *temp = NULL, *newNode;
//     int n, key, pos = 0;

//     cout << "Enter number of students: ";
//     cin >> n;

//     for (int i = 0; i < n; i++)
//     {
//         newNode = new node;
//         cout << "Enter Roll Number of student " << i + 1 << ": ";
//         cin >> newNode->roll;

//         newNode->next = NULL;
//         newNode->prev = NULL;

//         if (head == NULL)
//         {
//             head = newNode;
//             temp = newNode;
//         }
//         else
//         {
//             temp->next = newNode;
//             newNode->prev = temp;
//             temp = newNode;
//         }
//     }

//     cout << "\nEnter Roll Number to search: ";
//     cin >> key;

//     temp = head;
//     while (temp != NULL)
//     {
//         if (temp->roll == key)
//         {
//             cout << "Student Found at position " << pos;
//             return 0;
//         }
//         pos++;
//         temp = temp->next;
//     }

//     cout << "Student Not Found";
//     return 0;
// }





// NAME:aarushi gupta//1024150247//
//Delete a student://
// acknowledgement: conceptual help from textbook,leetcode,GeeksforGeeks,hackerRank//
#include <iostream>
using namespace std;

struct node
{
    int roll;
    node *prev;
    node *next;
};

int main()
{
    node *head = NULL, *temp = NULL, *newNode;
    int n, key;

    cout << "Enter number of students: ";
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        newNode = new node;
        cout << "Enter Roll Number of student " << i + 1 << ": ";
        cin >> newNode->roll;

        newNode->next = NULL;
        newNode->prev = NULL;

        if (head == NULL)
        {
            head = newNode;
            temp = newNode;
        }
        else
        {
            temp->next = newNode;
            newNode->prev = temp;
            temp = newNode;
        }
    }

    cout << "\nEnter Roll Number to delete: ";
    cin >> key;

    temp = head;
    while (temp != NULL && temp->roll != key)
        temp = temp->next;

    if (temp == NULL)
    {
        cout << "Student Not Found";
    }
    else
    {
        if (temp->prev != NULL)
            temp->prev->next = temp->next;
        else
            head = temp->next;

        if (temp->next != NULL)
            temp->next->prev = temp->prev;

        delete temp;
        cout << "Student Deleted Successfully";
    }

    return 0;
}
