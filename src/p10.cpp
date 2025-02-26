 /* 
Q10.  WAP to generate the output:
C
C+
C++
C++e
C++ea
C++eas
C++easy
*/

#include <iostream>
using namespace std;

int main() {
    cout << "Name: Aaromal A\nClass:ECE-A\nReg-No: 24101880\n\n";    
    string str = "C++easy";
    for (int i = 1; i <= str.length(); i++) {
        cout << str.substr(0, i) << endl;
    }
    return 0;
}