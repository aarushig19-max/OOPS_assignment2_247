#include <iostream>
// using namespace std;

// // Base class
// class Vehicle {
// protected:
//     string make, model;
//     int year;

// public:
//     void getVehicle() {
//         cout << "Enter Make: ";
//         cin >> make;
//         cout << "Enter Model: ";
//         cin >> model;
//         cout << "Enter Year: ";
//         cin >> year;
//     }

//     void showVehicle() {
//         cout << "Make: " << make << endl;
//         cout << "Model: " << model << endl;
//         cout << "Year: " << year << endl;
//     }
// };

// // Derived class
// class Truck : public Vehicle {
// protected:
//     int load_capacity;

// public:
//     void getTruck() {
//         getVehicle();
//         cout << "Enter Load Capacity: ";
//         cin >> load_capacity;
//     }

//     void showTruck() {
//         showVehicle();
//         cout << "Load Capacity: " << load_capacity << " tons" << endl;
//     }
// };

// // Derived from Truck
// class RefrigeratedTruck : public Truck {
// private:
//     int temperature_control;

// public:
//     void getRefrigeratedTruck() {
//         getTruck();
//         cout << "Enter Temperature Control: ";
//         cin >> temperature_control;
//     }

//     void showRefrigeratedTruck() {
//         showTruck();
//         cout << "Temperature Control: " 
//              << temperature_control << " degree C" << endl;
//     }
// };

// int main() {
//     RefrigeratedTruck rt;

//     cout << "--- Refrigerated Truck Details ---" << endl;
//     rt.getRefrigeratedTruck();
//     rt.showRefrigeratedTruck();

//     return 0;
// }
