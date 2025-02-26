 //Q1. WAP to display the sum of odd numbers between 1 and 50.

#include <iostream>
using namespace std;

int main() {
    cout << "Name: Aaromal A\nClass:ECE-A\nReg-No: 24101880\n\n";
    int sum = 0;
    for (int i = 1; i <= 50; i += 2) {
        sum += i;
    }
    cout << "Sum of odd numbers between 1 and 50: " << sum << endl;
    return 0;
}