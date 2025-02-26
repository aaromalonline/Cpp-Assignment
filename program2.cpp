//Q2. WAP to find the triangular number of a given integer (For example triangular of 5 is (1 + 2 + 3 + 4 + 5) 15). 

#include <iostream>
using namespace std;

int triangularNumber(int n) {
    return (n * (n + 1)) / 2;
}

int main() {
    cout << "Name: Aaromal A\nClass:ECE-A\nReg-No: 24101880\n";    
    int num;
    cout << "Enter an integer: ";
    cin >> num;
    cout << "Triangular number: " << triangularNumber(num) << endl;
    return 0;
}