
#include <iostream>
#include <cmath>
using namespace std;

inline int binaryToDecimal(int binary) {
    int decimal = 0, base = 1;
    while (binary > 0) {
        int lastDigit = binary % 10;
        decimal += lastDigit * base;
        binary /= 10;
        base *= 2;
    }
    return decimal;
}

int main() {
    cout << "Name: Madona Rose Irenius\nClass: ECE A\nRegister No: 24102232\n";
    int binary;
    cout << "Enter binary number: ";
    cin >> binary;
    cout << "Decimal equivalent: " << binaryToDecimal(binary) << endl;
    return 0;
}