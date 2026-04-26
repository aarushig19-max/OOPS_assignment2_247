#include <iostream>
// using namespace std;

// int main() {
//     int n = 6;

//     int a[10];

//     a[0] = 0;
//     a[1] = 1;

//     for(int i = 2; i < n; i++) {
//         a[i] = a[i-1] + a[i-2];
//     }

//     cout << "Fibonacci: ";

//     for(int i = 0; i < n; i++) {
//         cout << a[i] << " ";
//     }

//     return 0;
// }


// //(c)part//To find the factorial of a number using dynamic programming.
// #include <iostream>
// using namespace std;

// int main() {
//     int n = 5;

//     int a[10];

//     a[0] = 1;

//     for(int i = 1; i <= n; i++) {
//         a[i] = i * a[i-1];
//     }

//     cout << "Factorial = " << a[n];

//     return 0;
// }


// //(d)part//(Subset Sum problem)
// #include <iostream>
// using namespace std;

// int main() {
//     int a[] = {2, 8, 6, 10, 5, 7};
//     int n = 6;
//     int sum = 16;

//     int dp[10][100];

//     // initialize
//     for(int i = 0; i <= n; i++)
//         dp[i][0] = 1;

//     for(int j = 1; j <= sum; j++)
//         dp[0][j] = 0;

//     // fill table
//     for(int i = 1; i <= n; i++) {
//         for(int j = 1; j <= sum; j++) {

//             if(a[i-1] <= j)
//                 dp[i][j] = dp[i-1][j] || dp[i-1][j-a[i-1]];
//             else
//                 dp[i][j] = dp[i-1][j];
//         }
//     }

//     if(dp[n][sum] == 1)
//         cout << "True";
//     else
//         cout << "False";

//     return 0;
// }