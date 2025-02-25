 
#include <iostream>
using namespace std;

int main() {
    cout << "Name: Madona Rose Irenius\nClass: ECE A\nRegister No: 24102232\n";
    int num, largest = 0, smallest = 9;
    cout << "Enter a number: ";
    cin >> num;

    while (num > 0) {
        int digit = num % 10;
        if (digit > largest) largest = digit;
        if (digit < smallest) smallest = digit;
        num /= 10;
    }

    cout << "Largest digit: " << largest << "\nSmallest digit: " << smallest << endl;
    return 0;
}