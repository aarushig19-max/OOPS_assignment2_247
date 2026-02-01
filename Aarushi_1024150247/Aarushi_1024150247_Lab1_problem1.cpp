//aarushi247//Q1(a)part
// #include<iostream>
// using namespace std;
// int main() {
//     int first, last, sum=0;
//     cout << "enter first and last number: ";
//     cin >> first >> last;
//     for(int i = first; i<=last; i++){
//         sum +=i;
//     }
//     cout << "sum= " << sum;
//     return 0;
// }


//aarushi247//Q1(b)part
// #include<iostream>
// using namespace std;
// int main() {
//     int goal, sum=0, n=0;
//     cout << "enter goal value: ";
//     cin >> goal;
//     while(sum < goal){
//         n++;
//         sum +=n;
//     }
//     cout << "smallest n = " << n;
//     return 0;
// }



//aarushi247//Q1(c)part
// #include <iostream>
// using namespace std;

// int main() {
//     int a, b;
//     cout << "Enter two numbers: ";
//     cin >> a >> b;

//     while(b != 0) {
//         int temp = b;
//         b = a % b;
//         a = temp;
//     }

//     cout << "GCD = " << a;
//     return 0;
// }



//aarushi247//Q1(d)part
// #include <iostream>
// using namespace std;
// int main() {
//     int n, count = 0;

//     cout << "Enter a number: ";
//     cin >> n;

//     for(int i = 1; i <= n; i++) {
//         if(n % i == 0)
//             count++;
//     }

//     if(count == 2)
//         cout << "Prime Number";
//     else
//         cout << "Not Prime Number";

//     return 0;
// }











// using namespace std;
// int main() {
//     int n;
//     cout << "enter size of an array:";
//     cin >> n;
//     int arr[n];
//     cout << "enter elements\n";
//     for(int i = 0; i<n; i++)
//     cin >> arr[i];
//     cout << "reversed array:\n";
//     for(int i = n-1; i>=0; i--)
//     cout << arr[i] << " ";
//     return 0;
// }
// #include<iostream>
// using namespace std;
// int main() {
//     int n;
//     cout << "enter size: ";
//     cin >> n;
//     int arr[n];
//     for(int i = 0; i<n; i++)
//     cin >> arr[i];
//     int max = arr[0], index = 0;
//      for(int i = 1; i<n; i++){
//         if(arr[i] > max) {
//             max = arr[i];
//             index = i;
//         }
//      }
//      cout << "index of largest element = " << index;
//      return 0;
//     }

// #include<iostream>
// using namespace std;
// int main() {
//     int n;
//     cout << "enter size: ";
//     cin >> n;
//     int arr[n];
//     for(int i=0 ; i < n; i++)
//     cin >> arr[i];
//     int last = arr[n-1];
//     for(int i=n-1; i>0; i--)
//     arr[i]=arr[i-1];
//     arr[0] = last;
//     cout << "shifted array:\n";
//     for(int i=0 ; i < n; i++)
//     cout << arr[i] << " ";
//     return 0;
// }

// 

// #include<iostream>
// using namespace std;
// int main() {
// int n1,n2;
// cout << "enter size of first array: ";
// cin >> n1;

// cout << "enter size of second array: ";
// cin >> n2;
// int a[n1], b[n2];
// for(int i=0; i<n1; i++)
// cin >> a[i];
// for(int i=0; i<n2; i++)
// cin >> b[i];
// cout << "merged array:/n";
// for(int i=0; i<n1; i++)
// cout << a[i] << " ";
// for(int i=0; i<n2; i++)
// cout << b[i] << " ";
// return 0;
// }

// #include<iostream>
// using namespace std;
// int main() {
//     int n, sum=0;
//     cout << "enter size of array: ";
//     cin >> n;
//     int arr[n];
//     cout << "enter array elements:\n";