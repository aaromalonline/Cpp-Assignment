
#include <iostream>
using namespace std;

int triangularNumber(int n) {
    return (n * (n + 1)) / 2;
}

int main() {
    cout << "Name: Madona Rose Irenius\nClass: ECE A\nRegister No: 24102232\n";
    int num;
    cout << "Enter an integer: ";
    cin >> num;
    cout << "Triangular number: " << triangularNumber(num) << endl;
    return 0;
}