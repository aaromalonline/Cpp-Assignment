//Q9. WAP to display lower and uppercase characters from a to z.

#include <iostream>
using namespace std;

int main() {
    cout << "Name: Aaromal A\nClass:ECE-A\nReg-No: 24101880\n\n";    
    cout << "Lowercase: ";
    for (char c = 'a'; c <= 'z'; c++) cout << c << " ";
    cout << "\nUppercase: ";
    for (char c = 'A'; c <= 'Z'; c++) cout << c << " ";
    cout << endl;
    return 0;
}