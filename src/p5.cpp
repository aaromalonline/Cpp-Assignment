//Q5. WAP to find the area of square, rectangle, triangle and surface area of sphere using function overloading.

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
    cout << "Name: Aaromal A\nClass:ECE-A\nReg-No: 24101880\n\n";
    Area obj;
    cout << "Square area: " << obj.calculate(6) << "\n";
    cout << "Rectangle area: " << obj.calculate(6, 9) << "\n";
    cout << "Triangle area: " << obj.calculate(6, 9, 0) << "\n";
    cout << "Sphere surface area: " << obj.calculateSphere(5) << "\n";
    return 0;
}