//aarushi247//Q4(a)part
// #include <iostream>
// using namespace std;
// int main() {
//     int A[2][2], B[2][2];
//     int add[2][2], sub[2][2];
// cout << "Enter elements of Matrix A:\n";
//     for(int i = 0; i < 2; i++)
//         for(int j = 0; j < 2; j++)
//             cin >> A[i][j];
//  cout << "Enter elements of Matrix B:\n";
//     for(int i = 0; i < 2; i++)
//         for(int j = 0; j < 2; j++)
//             cin >> B[i][j];
// for(int i = 0; i < 2; i++) {
//         for(int j = 0; j < 2; j++) {
//             add[i][j] = A[i][j] + B[i][j];
//             sub[i][j] = A[i][j] - B[i][j];
//         }
//     }
//  cout << "Addition:\n";
//     for(int i = 0; i < 2; i++) {
//         for(int j = 0; j < 2; j++)
//             cout << add[i][j] << " ";
//         cout << endl;
//     }
// cout << "Subtraction:\n";
//     for(int i = 0; i < 2; i++) {
//         for(int j = 0; j < 2; j++)
//             cout << sub[i][j] << " ";
//         cout << endl;
//     }
// return 0;
// }


//aarushi247//Q4(b)part
// #include <iostream>
// using namespace std;
// int main() {
//     int r1, c1, r2, c2;
//     int A[10][10], B[10][10], C[10][10] = {0};
//     cout << "Enter rows and columns of Matrix A: ";
//     cin >> r1 >> c1;
//     cout << "Enter rows and columns of Matrix B: ";
//     cin >> r2 >> c2;
//     if(c1 != r2) {
//         cout << "Matrix multiplication not possible";
//         return 0;
//     }
//     cout << "Enter elements of Matrix A:\n";
//     for(int i = 0; i < r1; i++)
//         for(int j = 0; j < c1; j++)
//             cin >> A[i][j];

//     cout << "Enter elements of Matrix B:\n";
//     for(int i = 0; i < r2; i++)
//         for(int j = 0; j < c2; j++)
//             cin >> B[i][j];
//     for(int i = 0; i < r1; i++) {
//         for(int j = 0; j < c2; j++) {
//             for(int k = 0; k < c1; k++) {
//                 C[i][j] += A[i][k] * B[k][j];
//             }
//         }
//     }
//     cout << "Resultant Matrix:\n";
//     for(int i = 0; i < r1; i++) {
//         for(int j = 0; j < c2; j++)
//             cout << C[i][j] << " ";
//         cout << endl;
//     }
//    return 0;
// }
