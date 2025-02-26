 //Q8. WAP to find power of a number using recursion

#include <iostream>
using namespace std;

int power(int base, int exp) {
    if (exp == 0) return 1;
    return base * power(base, exp - 1);
}

int main() {
    cout << "Name: Aaromal A\nClass:ECE-A\nReg-No: 24101880\n";    
    int base, exp;
    cout << "Enter base and exponent: ";
    cin >> base >> exp;
    cout << "Result: " << power(base, exp) << endl;
    return 0;
}