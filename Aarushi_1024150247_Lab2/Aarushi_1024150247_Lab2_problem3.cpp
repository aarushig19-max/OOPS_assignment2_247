//aarushi247//Q3(a)part
// #include <iostream>
// using namespace std;
// int main() {
//     int n;
//     cout << "Enter rows: ";
//     cin >> n;

//     char a[20][40];

//     for (int i = 0; i < n; i++)
//         for (int j = 0; j < 2*n; j++)
//             a[i][j] = ' ';

//     for (int i = 0; i < n; i++)
//         for (int j = n-i-1; j <= n+i-1; j += 2)
//             a[i][j] = '*';

//     for (int i = 0; i < n; i++) {
//         for (int j = 0; j < 2*n; j++)
//             cout << a[i][j];
//         cout << endl;
//     }
//     return 0;
// }




//aarushi247//Q3(b)part
// #include <iostream>
// using namespace std;

// int main() {
//     int n;
//     cout << "Enter rows: ";
//     cin >> n;

//     char a[20][20];

//     for (int i = 0; i < n; i++)
//         for (int j = 0; j <= i; j++)
//             a[i][j] = '*';

//     for (int i = 0; i < n; i++) {
//         for (int j = 0; j <= i; j++)
//             cout << a[i][j] << " ";
//         cout << endl;
//     }
//     return 0;
// }



//aarushi247//Q3(c)part
// #include <iostream>
// using namespace std;

// int main() {
//     int n;
//     cout << "Enter rows: ";
//     cin >> n;

//     for (int i = n; i >= 1; i--) {
//         for (int s = 0; s < n-i; s++)
//             cout << " ";
//         for (int j = 1; j <= i; j++)
//             cout << "* ";
//         cout << endl;
//     }
//     return 0;
// }

//aarushi247//Q3(c)part
// #include <iostream>
// using namespace std;

// int main() {
//     int n;
//     cout << "Enter rows: ";
//     cin >> n;

//     for (int i = 1; i <= n; i++) {
//         for (int j = 1; j <= i; j++)
//             cout << "* ";
//         cout << endl;
//     }
//     return 0;
// }


//aarushi247//Q3(c)part
// #include <iostream>
// using namespace std;
// int main() {
//     int n;
//     cout << "Enter rows: ";
//     cin >> n;
//     for (int i = 1; i <= n; i++) {
//         for (int s = n-i; s > 0; s--)
//             cout << " ";
//         for (int j = 1; j <= i; j++)
//             cout << "* ";
//         cout << endl;
//     }

//     for (int i = n-1; i >= 1; i--) {
//         for (int s = n-i; s > 0; s--)
//             cout << " ";
//         for (int j = 1; j <= i; j++)
//             cout << "* ";
//         cout << endl;
//     }
//     return 0;
// }



//aarushi247//Q3(c)part
// #include <iostream>
// using namespace std;

// int main() {
//     int n;
//     cout << "Enter rows: ";
//     cin >> n;

//     for (int i = 1; i <= n; i++) {
//         for (int j = 1; j <= i; j++)
//             cout << i << " ";
//         cout << endl;
//     }
//     return 0;
// }



#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter rows: ";
    cin >> n;

    char ch = 'A';
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= i; j++)
            cout << ch << " ";
        ch++;
        cout << endl;
    }
    return 0;
}
