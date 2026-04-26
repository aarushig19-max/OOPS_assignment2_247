//FUNCTION TEMPLATE//
//Q1//
#include<iostream>
using namespace std;
template <typename T>
void swapdata (T &a, T &b)
{
    T temp=a;
    a=b;
    b=temp;
}
int main()
{
   int x=10,y=20;
   swapdata(x,y);
   cout<<"x" << " "<<y;
}



//Q2//
#include<iostream>
using namespace std;
template <typename T>
T findMin(T arr[], int n)
{
    T min= arr[0];
    for(int i=1; i<n;i++){
        if (arr[i]=min)
        min=arr[i];
    }
    return min;
}
int main()
{
    int arr[]={4,2,8,1};
    cout<< findMin(arr,4);
}




//Q3//
#include<iostream>
using namespace std;
template <typename T>
T findMax(T arr[], int n)
{
    T max = arr[0];
    for(int i=1; i<n;i++){
        if (arr[i]>max)
        max=arr[i];
    }
    return max;
}
int main()
{
    int arr[]={4,2,8,1};
    cout<< findMax(arr,4);
}


//Q4//
#include<iostream>
using namespace std;
template <typename T>
void bubbleSort(T arr[], int n)
{
    for(int i=0; i<n-1; i++)
    {
        for(int j=0; j<n-i-1; j++)
        {
            if (arr[j]>arr[j+1])
            {
                T temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
    }
}
int main()
{
    int arr[]={5,3,1,4};
    bubbleSort(arr,4);
    for(int i=0; i<4; i++)
    cout << arr[i] << " ";
}


//Q5//
#include<iostream>
using namespace std;
template <typename T>
int linearSearch(T arr[],int n, T key)
{
    for(int i=0; i<n; i++)
    {
        if(arr[i] == key)
        return i;
    }
}
int main(){
    int arr[]={10,20,30,40};
    int pos = linearSearch(arr, 4, 30);
    cout << pos;
}



//CLASS TEMPLATE//
//Q1//
#include <iostream>
using namespace std;

template <class T>
class Stack {
    T a[6];
    int t;

public:
    Stack() {
        t = -1;
    }

    void insert(T x) {
        if (t >= 5)
            cout << "Stack is full\n";
        else {
            t = t + 1;
            a[t] = x;
        }
    }

    void remove() {
        if (t < 0)
            cout << "Stack empty\n";
        else {
            cout << "Removed: " << a[t] << endl;
            t--;
        }
    }

    void show() {
        int i;
        for (i = t; i >= 0; i--)
            cout << a[i] << " ";
        cout << endl;
    }
};

int main() {
    Stack<int> s;
    s.insert(11);
    s.insert(22);
    s.insert(33);
    s.show();
    s.remove();
}


//Q2//
#include <iostream>
using namespace std;

template <class T>
class Queue {
    T a[6];
    int f, r;

public:
    Queue() {
        f = 0;
        r = -1;
    }

    void insert(T x) {
        if (r >= 5)
            cout << "No space\n";
        else {
            r = r + 1;
            a[r] = x;
        }
    }

    void remove() {
        if (f > r)
            cout << "Queue empty\n";
        else {
            cout << "Removed: " << a[f] << endl;
            f++;
        }
    }

    void show() {
        int i;
        for (i = f; i <= r; i++)
            cout << a[i] << " ";
        cout << endl;
    }
};

int main() {
    Queue<int> q;
    q.insert(5);
    q.insert(15);
    q.insert(25);
    q.show();
    q.remove();
}


//Q3//
#include <iostream>
using namespace std;

template <class T>
class Data {
    T x, y;

public:
    void get() {
        cout << "Enter two values: ";
        cin >> x >> y;
    }

    void show() {
        cout << "You entered: " << x << " and " << y << endl;
    }
};

int main() {
    Data<int> d;
    d.get();
    d.show();
}



//Q4//
#include <iostream>
using namespace std;

template <class T>
class SimpleCalc {
    T x, y;

public:
    void get() {
        cin >> x >> y;
    }

    void calc() {
        cout << "Sum = " << x + y << endl;
        cout << "Diff = " << x - y << endl;
        cout << "Product = " << x * y << endl;
        cout << "Division = " << x / y << endl;
    }
};

int main() {
    SimpleCalc<int> c;
    c.get();
    c.calc();
}

//Q5//
#include <iostream>
using namespace std;

template <class T>
class List {
    T a[5];

public:
    void get() {
        int i;
        cout << "Enter elements:\n";
        for (i = 0; i < 5; i++)
            cin >> a[i];
    }

    void show() {
        int i;
        cout << "Array is: ";
        for (i = 0; i < 5; i++)
            cout << a[i] << " ";
        cout << endl;
    }
};

int main() {
    List<int> l;
    l.get();
    l.show();
}