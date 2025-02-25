 
#include <iostream>
using namespace std;

int main() {
    cout << "Name: Kilian\nClass: BTech ECE\nRegister No: XXXXXXXX\n";
    int sum = 0;
    for (int i = 1; i <= 50; i += 2) {
        sum += i;
    }
    cout << "Sum of odd numbers between 1 and 50: " << sum << endl;
    return 0;
}