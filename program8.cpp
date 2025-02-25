 
#include <iostream>
using namespace std;

int power(int base, int exp) {
    if (exp == 0) return 1;
    return base * power(base, exp - 1);
}

int main() {
    cout << "Name: Kilian\nClass: BTech ECE\nRegister No: XXXXXXXX\n";
    int base, exp;
    cout << "Enter base and exponent: ";
    cin >> base >> exp;
    cout << "Result: " << power(base, exp) << endl;
    return 0;
}