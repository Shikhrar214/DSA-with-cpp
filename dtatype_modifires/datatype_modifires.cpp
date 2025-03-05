#include <iostream>

using namespace std;

int main() {
    short int shortVar = 32767; // Short integer
    unsigned int unsignedVar = 4294967295; // Unsigned integer
    long int longVar = 9223372036854775807; // Long integer
    signed int signedVar = -2147483648; // Signed integer

    cout << "Short integer: " << shortVar << endl;
    cout << "Unsigned integer: " << unsignedVar << endl;
    cout << "Long integer: " << longVar << endl;
    cout << "Signed integer: " << signedVar << endl;

    return 0;
}