
#include <iostream>
using namespace std;

class Area {
public:
    double calculate(double side) { return side * side; }
    double calculate(double length, double breadth) { return length * breadth; }
    double calculate(double base, double height, int) { return 0.5 * base * height; }
    double calculateSphere(double radius) { return 4 * 3.1416 * radius * radius; }
};

int main() {
    cout << "Name: Madona Rose Irenius\nClass: ECE A\nRegister No: 24102232\n";
    Area obj;
    cout << "Square area: " << obj.calculate(5) << "\n";
    cout << "Rectangle area: " << obj.calculate(5, 10) << "\n";
    cout << "Triangle area: " << obj.calculate(5, 10, 0) << "\n";
    cout << "Sphere surface area: " << obj.calculateSphere(5) << endl;
    return 0;
}