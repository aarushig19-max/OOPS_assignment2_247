//Q1//
#include <iostream>
using namespace std;

class Student {
public:
    int roll;
    void show() {
        cout << "Roll number: " << roll << endl;
    }
};

int main() {
    Student s;      // normal object
    s.roll = 10;
    s.show();       // dot operator

    Student *p;     // pointer to object
    p = &s;
    p->roll = 20;   // arrow operator
    p->show();

    return 0;
}






//Q2//
#include <iostream>
using namespace std;

class B;   // forward declaration

class A {
private:
    int x;
public:
    void set(int a) {
        x = a;
    }
    friend void swap(A &, B &);
};

class B {
private:
    int y;
public:
    void set(int b) {
        y = b;
    }
    friend void swap(A &, B &);
};

void swap(A &a, B &b) {
    int temp = a.x;
    a.x = b.y;
    b.y = temp;
}

int main() {
    A a;
    B b;

    a.set(5);
    b.set(10);

    swap(a, b);

    cout << "Swapped successfully" << endl;
    return 0;
}





//Q3//
#include <iostream>
using namespace std;

class B;

class A {
private:
    int x;
public:
    void set(int a) {
        x = a;
    }
    friend void add(A, B);
};

class B {
private:
    int y;
public:
    void set(int b) {
        y = b;
    }
    friend void add(A, B);
};

void add(A a, B b) {
    cout << "Sum = " << a.x + b.y << endl;
}

int main() {
    A a;
    B b;

    a.set(10);
    b.set(20);

    add(a, b);
    return 0;
}








//Q4//
#include <iostream>
using namespace std;

class FriendClass;

class MyClass {
private:
    int secret = 50;
    friend class FriendClass;
};

class FriendClass {
public:
    void show(MyClass obj) {
        cout << "Secret value: " << obj.secret << endl;
    }
};

int main() {
    MyClass obj;
    FriendClass f;
    f.show(obj);
    return 0;
}







//Q5//
#include <iostream>
using namespace std;

class Rectangle {
public:
    int l, b;
    void input() {
        cin >> l >> b;
    }
    void area() {
        cout << "Area = " << l * b << endl;
    }
};

int main() {
    Rectangle r[3];

    for (int i = 0; i < 3; i++) {
        cout << "Enter length and breadth: ";
        r[i].input();
    }

    for (int i = 0; i < 3; i++) {
        r[i].area();
    }

    return 0;
}









//Q6//
#include <iostream>
using namespace std;

inline int cube(int x) {
    return x * x * x;
}

int main() {
    int n;
    cout << "Enter number: ";
    cin >> n;

    cout << "Cube = " << cube(n) << endl;
    return 0;
}





//Q7//pass by value
#include <iostream>
using namespace std;

class Number {
public:
    int x;
};

Number modify(Number n) {
    n.x = n.x + 5;
    return n;
}

int main() {
    Number n1, n2;
    n1.x = 10;

    n2 = modify(n1);

    cout << "Original: " << n1.x << endl;
    cout << "Modified: " << n2.x << endl;
    return 0;
}




