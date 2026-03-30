//NAME:aarushi gupta//1024150247//
//For a given array, check if an array is sorted//
//acknowledgement: conceptual help from textbook,leetcode,GeeksforGeeks,hackerRank//
// #include <iostream>
// #include <stdlib.h>
// using namespace std;
// int main()
// {
//     int n;
//     cout << "Enter size: ";
//     cin >> n;

//     int *a = (int*)malloc(n * sizeof(int));

//     cout << "Enter elements:\n";
//     for(int i = 0; i < n; i++)
//     {
//         cin >> a[i];
//     }

//     int flag = 1;

//     for(int i = 0; i < n - 1; i++)
//     {
//         if(a[i] > a[i + 1])
//         {
//             flag = 0;
//             break;
//         }
//     }

//     if(flag == 1)
//         cout << "Array is sorted";
//     else
//         cout << "Array is not sorted";

//     free(a);
//     return 0;
// }




//NAME:aarushi gupta//1024150247//
//If two arrays are given, merge them.//
//acknowledgement: conceptual help from textbook,leetcode,GeeksforGeeks,hackerRank//
// #include <iostream>
// #include <stdlib.h>
// using namespace std;

// int main()
// {
//     int n, m;
//     cout << "Enter size of first array: ";
//     cin >> n;

//     cout << "Enter size of second array: ";
//     cin >> m;

//     int *a = (int*)malloc(n * sizeof(int));
//     int *b = (int*)malloc(m * sizeof(int));
//     int *c = (int*)malloc((n + m) * sizeof(int));

//     cout << "Enter first array elements:\n";
//     for(int i = 0; i < n; i++)
//     {
//         cin >> a[i];
//     }

//     cout << "Enter second array elements:\n";
//     for(int i = 0; i < m; i++)
//     {
//         cin >> b[i];
//     }

//     int k = 0;

//     for(int i = 0; i < n; i++)
//     {
//         c[k] = a[i];
//         k++;
//     }

//     for(int i = 0; i < m; i++)
//     {
//         c[k] = b[i];
//         k++;
//     }

//     cout << "Merged array: ";
//     for(int i = 0; i < n + m; i++)
//     {
//         cout << c[i] << " ";
//     }

//     free(a);
//     free(b);
//     free(c);
//     return 0;
// }







//NAME:aarushi gupta//1024150247//
//Perform Set operations on two arrays using loop: Union, Intersection//
//acknowledgement: conceptual help from textbook,leetcode,GeeksforGeeks,hackerRank//
// #include <iostream>
// #include <stdlib.h>
// using namespace std;

// int main()
// {
//     int n, m;
//     cout << "Enter size of first array: ";
//     cin >> n;
//     cout << "Enter size of second array: ";
//     cin >> m;

//     int *a = (int*)malloc(n * sizeof(int));
//     int *b = (int*)malloc(m * sizeof(int));

//     cout << "Enter first array:\n";
//     for(int i = 0; i < n; i++)
//         cin >> a[i];

//     cout << "Enter second array:\n";
//     for(int i = 0; i < m; i++)
//         cin >> b[i];

//     cout << "Union: ";

//     for(int i = 0; i < n; i++)
//         cout << a[i] << " ";

//     for(int j = 0; j < m; j++)
//     {
//         int flag = 0;
//         for(int i = 0; i < n; i++)
//         {
//             if(b[j] == a[i])
//                 flag = 1;
//         }
//         if(flag == 0)
//             cout << b[j] << " ";
//     }

//     free(a);
//     free(b);
//     return 0;
// }





//NAME:aarushi gupta//1024150247//
//intersection//
//acknowledgement: conceptual help from textbook,leetcode,GeeksforGeeks,hackerRank//
// #include <iostream>
// #include <stdlib.h>
// using namespace std;

// int main()
// {
//     int n, m;
//     cout << "Enter size of first array: ";
//     cin >> n;

//     cout << "Enter size of second array: ";
//     cin >> m;

//     int *a = (int*)malloc(n * sizeof(int));
//     int *b = (int*)malloc(m * sizeof(int));

//     cout << "Enter first array elements:\n";
//     for(int i = 0; i < n; i++)
//     {
//         cin >> a[i];
//     }

//     cout << "Enter second array elements:\n";
//     for(int i = 0; i < m; i++)
//     {
//         cin >> b[i];
//     }

//     cout << "Intersection: ";
//     for(int i = 0; i < n; i++)
//     {
//         for(int j = 0; j < m; j++)
//         {
//             if(a[i] == b[j])
//             {
//                 cout << a[i] << " ";
//                 break;   
//             }
//         }
//     }

//     free(a);
//     free(b);
//     return 0;
// }




//NAME:aarushi gupta//1024150247//
//Find duplicates in an sorted array//
//acknowledgement: conceptual help from textbook,leetcode,GeeksforGeeks,hackerRank//
// #include <iostream>
// #include <stdlib.h>
// using namespace std;

// int main()
// {
//     int n;
//     cout << "Enter size: ";
//     cin >> n;

//     int *a = (int*)malloc(n * sizeof(int));

//     cout << "Enter sorted array:\n";
//     for(int i = 0; i < n; i++)
//         cin >> a[i];

//     cout << "Duplicates: ";
//     for(int i = 0; i < n-1; i++)
//     {
//         if(a[i] == a[i+1])
//             cout << a[i] << " ";
//     }

//     free(a);
//     return 0;
// }





//NAME:aarushi gupta//1024150247//
//Find duplicates in an unsorted array//
//acknowledgement: conceptual help from textbook,leetcode,GeeksforGeeks,hackerRank//
// #include <iostream>
// #include <stdlib.h>
// using namespace std;

// int main()
// {
//     int n;
//     cout << "Enter size: ";
//     cin >> n;

//     int *a = (int*)malloc(n * sizeof(int));

//     cout << "Enter array:\n";
//     for(int i = 0; i < n; i++)
//         cin >> a[i];

//     cout << "Duplicates: ";
//     for(int i = 0; i < n; i++)
//     {
//         for(int j = i+1; j < n; j++)
//         {
//             if(a[i] == a[j])
//             {
//                 cout << a[i] << " ";
//                 break;
//             }
//         }
//     }

//     free(a);
//     return 0;
// }



// NAME:aarushi gupta//1024150247//
// Find a pair of elements with sum k//
// acknowledgement: conceptual help from textbook,leetcode,GeeksforGeeks,hackerRank//
// #include <iostream>
// #include <stdlib.h>
// using namespace std;

// int main()
// {
//     int n, k;
//     cout << "Enter size: ";
//     cin >> n;

//     int *a = (int*)malloc(n * sizeof(int));

//     cout << "Enter array elements:\n";
//     for(int i = 0; i < n; i++)
//     {
//         cin >> a[i];
//     }

//     cout << "Enter sum k: ";
//     cin >> k;

//     cout << "Pairs: ";
//     for(int i = 0; i < n - 1; i++)
//     {
//         for(int j = i + 1; j < n; j++)
//         {
//             if(a[i] + a[j] == k)
//             {
//                 cout << "(" << a[i] << "," << a[j] << ") ";
//             }
//         }
//     }

//     free(a);
//     return 0;
// }





// NAME:aarushi gupta//1024150247//
// Find a pair of elements with sum k in sorted array//
// acknowledgement: conceptual help from textbook,leetcode,GeeksforGeeks,hackerRank//
// #include <iostream>
// #include <stdlib.h>
// using namespace std;

// int main()
// {
//     int n, k;
//     cout << "Enter size: ";
//     cin >> n;

//     int *a = (int*)malloc(n * sizeof(int));

//     cout << "Enter sorted array elements:\n";
//     for(int i = 0; i < n; i++)
//     {
//         cin >> a[i];
//     }

//     cout << "Enter sum k: ";
//     cin >> k;

//     int i = 0;
//     int j = n - 1;

//     cout << "Pairs: ";
//     while(i < j)
//     {
//         int sum = a[i] + a[j];

//         if(sum == k)
//         {
//             cout << "(" << a[i] << "," << a[j] << ") ";
//             i++;
//             j--;
//         }
//         else if(sum < k)
//         {
//             i++;
//         }
//         else
//         {
//             j--;
//         }
//     }

//     free(a);
//     return 0;
// }




// NAME:aarushi gupta//1024150247//
// Find max and min in a single scan//
// acknowledgement: conceptual help from textbook,leetcode,GeeksforGeeks,hackerRank//

// #include <iostream>
// #include <stdlib.h>
// using namespace std;

// int main()
// {
//     int n;
//     cout << "Enter size: ";
//     cin >> n;

//     int *a = (int*)malloc(n * sizeof(int));

//     cout << "Enter array:\n";
//     for(int i = 0; i < n; i++)
//         cin >> a[i];

//     int max = a[0], min = a[0];

//     for(int i = 1; i < n; i++)
//     {
//         if(a[i] > max)
//             max = a[i];
//         if(a[i] < min)
//             min = a[i];
//     }

//     cout << "Max = " << max << endl;
//     cout << "Min = " << min;

//     free(a);
//     return 0;
// }





// NAME:aarushi gupta//1024150247//
// long addition of two numbers where the numbers of digits are between 100 and 10000 (both inclusive).//
// acknowledgement: conceptual help from textbook,leetcode,GeeksforGeeks,hackerRank//
// #include <iostream>
// #include <stdlib.h>
// using namespace std;

// int main()
// {
//     int n1, n2;
//     int i, j, k;
//     int carry = 0;

//     cout << "Enter digits count of first number: ";
//     cin >> n1;

//     cout << "Enter digits count of second number: ";
//     cin >> n2;

//     int *a = (int*)malloc(n1 * sizeof(int));
//     int *b = (int*)malloc(n2 * sizeof(int));

//     int max;
//     if(n1 > n2)
//         max = n1;
//     else
//         max = n2;

//     int *c = (int*)malloc((max + 1) * sizeof(int));

//     cout << "Enter digits of first number:\n";
//     for(i = 0; i < n1; i++)
//         cin >> a[i];

//     cout << "Enter digits of second number:\n";
//     for(i = 0; i < n2; i++)
//         cin >> b[i];

//     i = n1 - 1;
//     j = n2 - 1;
//     k = max;

//     while(i >= 0 || j >= 0)
//     {
//         int sum = carry;

//         if(i >= 0)
//             sum = sum + a[i];

//         if(j >= 0)
//             sum = sum + b[j];

//         c[k] = sum % 10;
//         carry = sum / 10;

//         i--;
//         j--;
//         k--;
//     }

//     if(carry > 0)
//         c[k] = carry;
//     else
//         k++;

//     cout << "Sum = ";
//     while(k <= max)
//     {
//         cout << c[k];
//         k++;
//     }

//     free(a);
//     free(b);
//     free(c);

//     return 0;
// }


