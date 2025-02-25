 
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
    cout << "Name: Kilian\nClass: BTech ECE\nRegister No: XXXXXXXX\n";
    Converter obj;
    cout << "ASCII character: " << obj.toASCII(65) << "\n";
    cout << "ASCII string: " << obj.toASCII(45.67f) << endl;
    return 0;
}