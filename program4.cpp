//Q4. WAP to enter a multiple digit number and find its largest and smallest digits.

#include <iostream>
using namespace std;

int main() {
    cout << "Name: Aaromal A\nClass:ECE-A\nReg-No: 24101880\n";    
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