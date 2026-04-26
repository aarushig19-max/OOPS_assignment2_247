//NAME:aarushi gupta//1024150247//
//Closest Pair of Points Using Brute Force and Divide & Conquer//
//acknowledgement: conceptual help from textbook,leetcode,GeeksforGeeks,hackerRank//

#include <iostream>
#include <cmath>
using namespace std;

float dis(int x1, int y1, int x2, int y2) {
    return sqrt((x2 - x1)*(x2 - x1) + (y2 - y1)*(y2 - y1));
}

int main() {
    int x[] = {2, 12, 40, 5, 12, 3};
    int y[] = {3, 30, 50, 1, 10, 4};
    int n = 6;

    float min = 9999;
    int a, b;  
    for(int i = 0; i < n; i++) {
        for(int j = i+1; j < n; j++) {

            float d = dis(x[i], y[i], x[j], y[j]);

            if(d < min) {
                min = d;
                a = i;
                b = j;
            }
        }
    }

    cout << "Closest Pair: (" << x[a] << "," << y[a] << ") and ("
         << x[b] << "," << y[b] << ")" << endl;

    cout << "Distance = " << min;

    return 0;
}

//divide//
// #include <iostream>
// #include <cmath>
// #include <algorithm>
// using namespace std;

// struct P {
//     int x, y;
// };

// // distance
// float dis(P a, P b) {
//     return sqrt((a.x - b.x)*(a.x - b.x) + (a.y - b.y)*(a.y - b.y));
// }

// // simple brute
// float fun(P arr[], int n) {
//     float m = 9999;

//     for(int i = 0; i < n; i++) {
//         for(int j = i+1; j < n; j++) {
//             float d = dis(arr[i], arr[j]);
//             if(d < m)
//                 m = d;
//         }
//     }
//     return m;
// }
// // sort by x
// bool cmp(P a, P b) {
//     return a.x < b.x;
// }
// int main() {
//     P a[] = {{2,3}, {12,30}, {40,50}, {5,1}, {12,10}, {3,4}};
//     int n = 6;

//     sort(a, a+n, cmp);
//     int mid = n/2;
//     float left = fun(a, mid);
//     float right = fun(a+mid, n-mid);

//     float ans;
//     if(left < right)
//         ans = left;
//     else
//         ans = right;

//     cout << "Min from left & right = " << ans;

//     return 0;
// }


// //conquer//
// #include <iostream>
// #include <cmath>
// #include <algorithm>
// using namespace std;

// struct P {
//     int x, y;
// };

// float dis(P a, P b) {
//     return sqrt((a.x - b.x)*(a.x - b.x) + (a.y - b.y)*(a.y - b.y));
// }

// bool cmp(P a, P b) {
//     return a.x < b.x;
// }

// int main() {
//     P a[] = {{2,3}, {12,30}, {40,50}, {5,1}, {12,10}, {3,4}};
//     int n = 6;

//     sort(a, a+n, cmp);

//     int mid = n/2;
//     P midP = a[mid];

//     float d = 5; // assume from first code

//     P strip[10];
//     int c = 0;

//     // make strip
//     for(int i = 0; i < n; i++) {
//         if(abs(a[i].x - midP.x) < d) {
//             strip[c] = a[i];
//             c++;
//         }
//     }

//     float ans = d;

//     // check strip
//     for(int i = 0; i < c; i++) {
//         for(int j = i+1; j < c; j++) {
//             float t = dis(strip[i], strip[j]);
//             if(t < ans)
//                 ans = t;
//         }
//     }

//     cout << "Final min = " << ans;

//     return 0;
// }