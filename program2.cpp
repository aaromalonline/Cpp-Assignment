
#include <iostream>
using namespace std;

int triangularNumber(int n) {
    return (n * (n + 1)) / 2;
}

int main() {
    cout << "Name: Kilian\nClass: BTech ECE\nRegister No: XXXXXXXX\n";
    int num;
    cout << "Enter an integer: ";
    cin >> num;
    cout << "Triangular number: " << triangularNumber(num) << endl;
    return 0;
}