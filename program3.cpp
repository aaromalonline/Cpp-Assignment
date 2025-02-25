
#include <iostream>
using namespace std;

int main() {
    cout << "Name: Madona Rose Irenius\nClass: ECE A\nRegister No: 24102232\n";
    int a, b, choice;
    cout << "Enter two numbers: ";
    cin >> a >> b;
    cout << "Choose operation: 1.Add 2.Subtract 3.Multiply 4.Divide: ";
    cin >> choice;
    
    switch (choice) {
        case 1: cout << "Sum: " << a + b; break;
        case 2: cout << "Difference: " << a - b; break;
        case 3: cout << "Product: " << a * b; break;
        case 4: cout << "Quotient: " << (b != 0 ? (double)a / b : 0); break;
        default: cout << "Invalid choice";
    }
    return 0;
}