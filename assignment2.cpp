// #include <iostream>
// #include <string>
// using namespace std;

// struct student
// {
//     int rollNo;
//     string name;
//     string degree;
//     string hostel;
//     float cgpa;

//     void addDetails()
//     {
//         cout << "Enter name: ";
//         cin >> name;

//         cout << "Enter rollNo: ";
//         cin >> rollNo;

//         cout << "Enter degree: ";
//         cin >> degree;

//         cout << "Enter hostel: ";
//         cin >> hostel;

//         cout << "Enter CGPA: ";
//         cin >> cgpa;
//     }

//     void displayDetails()
//     {
//         cout << "\nName: " << name;
//         cout << "\nRoll No: " << rollNo;
//         cout << "\nDegree: " << degree;
//         cout << "\nHostel: " << hostel;
//         cout << "\nCGPA: " << cgpa;
//     }
// };

// int main()
// {
//     student s;
//     s.addDetails();
//     s.displayDetails();
//     return 0;
// }






// #include <iostream>
// using namespace std;

// class Student
// {
// private:
//     int roll;

// public:
//     void setRoll(int r)
//     {
//         roll = r;
//     }

//     void showRoll()
//     {
//         cout << roll;
//     }
// };

// int main()
// {
//     Student s;
//     s.setRoll(10);
//     s.showRoll();
//     return 0;
// }






// #include <iostream>
// using namespace std;
// struct Demo
// {
//     void show()
//     {
//         cout << "inside show function";
//     }
//     void call()
//     {
//         show();
//     }
// };
// int main()
// {
//     Demo d;
//     d.call();
//     return 0;
// }



// #include <iostream>
// using namespace std;
// struct Rectangle
// {
//     int width, height;
//     void getData()
//     {
//         cin >> width >> height;
//     }
//     void calculatearea()
//     {
//         cout << "area = " << width*height;
//     }
// };
// int main()
// {
//     Rectangle r;
//     r.getData();
//     r.calculatearea();
//     return 0;
// }




// #include <iostream>
// using namespace std;

// struct Complex
// {
//     float real, imag;

//     void setComplex(float r, float i)
//     {
//         real = r;
//         imag = i;
//     }

//     void display()
//     {
//         cout << real << " + " << imag << "i";
//     }

//     Complex add(Complex c)
//     {
//         Complex temp;
//         temp.real = real + c.real;
//         temp.imag = imag + c.imag;
//         return temp;
//     }
// };

// int main()
// {
//     Complex c1, c2, sum;

//     c1.setComplex(2, 2);
//     c2.setComplex(3, 4);

//     sum = c1.add(c2);

//     cout << "Sum = ";
//     sum.display();

//     return 0;
// }






// #include <iostream>
// using namespace std;
// struct test
// {
//     void show();
// };
// void test::show()
// {
//     cout << "function outside struct";
// }
// int main()
// {
//     test t;
//     t.show();
//     return 0;
// }




#include<iostream>
using namespace std;
namespace Student
{
    int id=101;
    void show()
    {
        cout << "Student ID= " << id << endl;
    }
}
namespace Teacher
{
    int id=202;
    void show()
    {
        cout << "Teacher ID= " << id <<endl;
    }
}
int main()
{
    Student::show();
    Teacher::show();
    return 0;
}