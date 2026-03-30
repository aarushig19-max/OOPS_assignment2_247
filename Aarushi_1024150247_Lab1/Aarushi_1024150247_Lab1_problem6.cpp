#include <iostream>
using namespace std;
class Rectangle { //(a)// creating a class named Rectangle
    int length, breadth;
public:
//(b)// Member function to read values
    void getData() { 
        cout << "Enter length and breadth: ";
        cin >> length >> breadth;
    }
    void area() {
        cout << "Area of rectangle = " << length * breadth << endl;
    }
    void perimeter() {
        cout << "Perimeter of rectangle = " << 2 * (length + breadth) << endl;
    }
};
int main() {
    //(c)//creating objects and demonstrating functionality
    Rectangle r;
    r.getData();
    r.area();
    r.perimeter();
   return 0;
}
