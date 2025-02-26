//Q3. WAP to do arithmetic operations according to user choice using switch case.

#include <iostream>
using namespace std;

int main() {
    cout << "Name: Aaromal A\nClass:ECE-A\nReg-No: 24101880\n\n";    
    int a, b, choice;
    cout << "Enter two numbers: ";
    cin >> a >> b;
    cout << "Choose operation: 1.Add 2.Subtract 3.Multiply 4.Divide: ";
    cin >> choice;
    
    switch (choice) {
        case 1: cout << "Sum: " << a + b << '\n'; break;
        case 2: cout << "Difference: " << a - b << '\n'; break;
        case 3: cout << "Product: " << a * b << '\n'; break;
        case 4: cout << "Quotient: " << (b != 0 ? (double)a / b : 0) << '\n'; break;
        default: cout << "Invalid choice";
    }
    return 0;
}