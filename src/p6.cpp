 /* Q6. WAP to convert an integer number to an ASCII character and float to ASCII 
 string using function overloading. */

#include <iostream>
#include <sstream>
using namespace std;

class Converter {
public:
    char toASCII(int num) { return static_cast<char>(num); }

    string toASCII(float num) {
        ostringstream ss;
        ss << num;
        return ss.str();
    }
};

int main() {
    cout << "Name: Aaromal A\nClass:ECE-A\nReg-No: 24101880\n\n";    
    Converter obj;
    cout << "ASCII character: " << obj.toASCII(65) << "\n";
    cout << "ASCII string: " << obj.toASCII(45.67f) << "\n";
    return 0;
}