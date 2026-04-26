// NAME:aarushi gupta//1024150247//
//Display Players//
// acknowledgement: conceptual help from textbook,leetcode,GeeksforGeeks,hackerRank//
// #include <iostream>
// using namespace std;

// struct node
// {
//     int playerId;
//     node *next;
// };

// int main()
// {
//     node *head = NULL, *temp = NULL, *newNode;
//     int n;

//     cout << "Enter number of players: ";
//     cin >> n;

//     for (int i = 0; i < n; i++)
//     {
//         newNode = new node;

//         cout << "Enter Player ID " << i + 1 << ": ";
//         cin >> newNode->playerId;

//         if (head == NULL)
//         {
//             head = newNode;
//             temp = newNode;
//             newNode->next = head;
//         }
//         else
//         {
//             temp->next = newNode;
//             newNode->next = head;
//             temp = newNode;
//         }
//     }

//     cout << "\nPlayers in the game:\n";
//     temp = head;
//     if (head != NULL)
//     {
//         do
//         {
//             cout << temp->playerId << endl;
//             temp = temp->next;
//         } while (temp != head);
//     }

//     return 0;
// }



// NAME:aarushi gupta//1024150247//
//Count Players//
// acknowledgement: conceptual help from textbook,leetcode,GeeksforGeeks,hackerRank//
// #include <iostream>
// using namespace std;

// struct node
// {
//     int playerId;
//     node *next;
// };

// int main()
// {
//     node *head = NULL, *temp = NULL, *newNode;
//     int n, count = 0;

//     cout << "Enter number of players: ";
//     cin >> n;

//     for (int i = 0; i < n; i++)
//     {
//         newNode = new node;
//         cout << "Enter Player ID " << i + 1 << ": ";
//         cin >> newNode->playerId;

//         if (head == NULL)
//         {
//             head = newNode;
//             temp = newNode;
//             newNode->next = head;
//         }
//         else
//         {
//             temp->next = newNode;
//             newNode->next = head;
//             temp = newNode;
//         }
//     }

//     temp = head;
//     if (head != NULL)
//     {
//         do
//         {
//             count++;
//             temp = temp->next;
//         } while (temp != head);
//     }

//     cout << "\nTotal Players = " << count;
//     return 0;
// }






// NAME:aarushi gupta//1024150247//
//Search for Specific Player//
// acknowledgement: conceptual help from textbook,leetcode,GeeksforGeeks,hackerRank//
// #include <iostream>
// using namespace std;

// struct node
// {
//     int playerId;
//     node *next;
// };

// int main()
// {
//     node *head = NULL, *temp = NULL, *newNode;
//     int n, id, found = 0;

//     cout << "Enter number of players: ";
//     cin >> n;

//     for (int i = 0; i < n; i++)
//     {
//         newNode = new node;
//         cout << "Enter Player ID " << i + 1 << ": ";
//         cin >> newNode->playerId;

//         if (head == NULL)
//         {
//             head = newNode;
//             temp = newNode;
//             newNode->next = head;
//         }
//         else
//         {
//             temp->next = newNode;
//             newNode->next = head;
//             temp = newNode;
//         }
//     }

//     cout << "\nEnter Player ID to search: ";
//     cin >> id;

//     temp = head;
//     if (head != NULL)
//     {
//         do
//         {
//             if (temp->playerId == id)
//             {
//                 found = 1;
//                 break;
//             }
//             temp = temp->next;
//         } while (temp != head);
//     }

//     if (found)
//         cout << "Player Found";
//     else
//         cout << "Player Not Found";

//     return 0;
// }





// NAME:aarushi gupta//1024150247//
//Remove Player//
// acknowledgement: conceptual help from textbook,leetcode,GeeksforGeeks,hackerRank//

#include <iostream>
using namespace std;

struct node
{
    int playerId;
    node *next;
};

int main()
{
    node *head = NULL, *temp = NULL, *newNode, *prev = NULL;
    int n, id;

    cout << "Enter number of players: ";
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        newNode = new node;
        cout << "Enter Player ID " << i + 1 << ": ";
        cin >> newNode->playerId;

        if (head == NULL)
        {
            head = newNode;
            temp = newNode;
            newNode->next = head;
        }
        else
        {
            temp->next = newNode;
            newNode->next = head;
            temp = newNode;
        }
    }
    cout << "\nEnter Player ID to remove: ";
    cin >> id;

    temp = head;
    do
    {
        if (temp->playerId == id)
            break;
        prev = temp;
        temp = temp->next;
    } while (temp != head);

    if (temp->playerId != id)
    {
        cout << "Player Not Found";
    }
    else
    {
        if (temp == head)
        {
            node *last = head;
            while (last->next != head)
                last = last->next;

            head = head->next;
            last->next = head;
        }
        else
        {
            prev->next = temp->next;
        }

        delete temp;
        cout << "Player Removed Successfully";
    }
    return 0;
}



