 
#include <iostream>
using namespace std;

int main() {
    cout << "Name: Madona Rose Irenius\nClass: ECE A\nRegister No: 24102232\n";
    string str = "C++easy";
    for (int i = 1; i <= str.length(); i++) {
        cout << str.substr(0, i) << endl;
    }
    return 0;
}