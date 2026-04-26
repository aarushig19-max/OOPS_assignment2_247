// NAME:aarushi gupta//1024150247//
//Display Orders: Implement a function to display all orders in the restaurant//
// acknowledgement: conceptual help from textbook,leetcode,GeeksforGeeks,hackerRank//
// #include <iostream>
// using namespace std;

// struct node
// {
//     int orderId;
//     int price;
//     node *next;
// };

// int main()
// {
//     node *head = NULL, *temp = NULL, *newNode;
//     int n;

//     cout << "Enter number of orders: ";
//     cin >> n;

//     for (int i = 0; i < n; i++)
//     {
//         newNode = new node;

//         cout << "\nEnter details for Order " << i + 1 << endl;
//         cout << "Order ID: ";
//         cin >> newNode->orderId;

//         cout << "Price: ";
//         cin >> newNode->price;

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

//     cout << "\nOrders Entered:\n";
//     temp = head;
//     while (temp != NULL)
//     {
//         cout << "Order ID: " << temp->orderId
//              << ", Price: " << temp->price << endl;
//         temp = temp->next;
//     }

//     return 0;
// }



// NAME:aarushi gupta//1024150247//
//Count Orders and Calculate Total Order Value//
// acknowledgement: conceptual help from textbook,leetcode,GeeksforGeeks,hackerRank//
// #include <iostream>
// using namespace std;

// struct node
// {
//     int orderId;
//     int price;
//     node *next;
// };

// int main()
// {
//     node *head = NULL, *temp = NULL, *newNode;
//     int n, count = 0, total = 0;

//     cout << "Enter number of orders: ";
//     cin >> n;

//     for (int i = 0; i < n; i++)
//     {
//         newNode = new node;

//         cout << "\nEnter details for Order " << i + 1 << endl;
//         cout << "Order ID: ";
//         cin >> newNode->orderId;

//         cout << "Price: ";
//         cin >> newNode->price;

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

//     temp = head;
//     while (temp != NULL)
//     {
//         count++;
//         total = total + temp->price;
//         temp = temp->next;
//     }

//     cout << "\nTotal Orders = " << count << endl;
//     cout << "Total Value  = " << total << endl;

//     return 0;
// }





// NAME:aarushi gupta//1024150247//
//Search for Specific Order//
// acknowledgement: conceptual help from textbook,leetcode,GeeksforGeeks,hackerRank//
// #include <iostream>
// using namespace std;

// struct node
// {
//     int orderId;
//     int price;
//     node *next;
// };

// int main()
// {
//     node *head = NULL, *temp = NULL, *newNode;
//     int n, id;

//     cout << "Enter number of orders: ";
//     cin >> n;

//     for (int i = 0; i < n; i++)
//     {
//         newNode = new node;

//         cout << "\nEnter details for Order " << i + 1 << endl;
//         cout << "Order ID: ";
//         cin >> newNode->orderId;

//         cout << "Price: ";
//         cin >> newNode->price;

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

//     cout << "\nEnter Order ID to search: ";
//     cin >> id;

//     temp = head;
//     while (temp != NULL)
//     {
//         if (temp->orderId == id)
//         {
//             cout << "\nOrder Found!" << endl;
//             cout << "Order ID: " << temp->orderId << endl;
//             cout << "Price   : " << temp->price << endl;
//             return 0;
//         }
//         temp = temp->next;
//     }

//     cout << "\nOrder Not Found";
//     return 0;
// }




// NAME:aarushi gupta//1024150247//
//Delete an Order//
// acknowledgement: conceptual help from textbook,leetcode,GeeksforGeeks,hackerRank//
#include <iostream>
#include <iostream>
using namespace std;

struct node
{
    int orderId;
    int price;
    node *next;
};

int main()
{
    node *head = NULL, *temp = NULL, *newNode, *prev = NULL;
    int n, id;

    cout << "Enter number of orders: ";
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        newNode = new node;

        cout << "\nEnter details for Order " << i + 1 << endl;
        cout << "Order ID: ";
        cin >> newNode->orderId;

        cout << "Price: ";
        cin >> newNode->price;

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

    cout << "\nEnter Order ID to delete: ";
    cin >> id;

    temp = head;
    while (temp != NULL && temp->orderId != id)
    {
        prev = temp;
        temp = temp->next;
    }

    if (temp == NULL)
    {
        cout << "\nOrder Not Found";
    }
    else
    {
        if (prev == NULL)          // delete first node
            head = temp->next;
        else
            prev->next = temp->next;

        delete temp;
        cout << "\nOrder Deleted Successfully";
    }

    return 0;
}
