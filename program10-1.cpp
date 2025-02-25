 
#include <iostream>
using namespace std;

int main() {
    cout << "Name: Kilian\nClass: BTech ECE\nRegister No: XXXXXXXX\n";
    string str = "C++easy";
    for (int i = 1; i <= str.length(); i++) {
        cout << str.substr(0, i) << endl;
    }
    return 0;
}