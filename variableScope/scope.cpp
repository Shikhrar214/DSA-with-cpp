#include <iostream>

using namespace std;

int globalVar = 10; // Global variable

void display() {
    int localVar = 20; // Local variable
    cout << "Inside display function:" << endl;
    cout << "Global variable: " << globalVar << endl;
    cout << "Local variable: " << localVar << endl;
}

int main() {
    int localVar = 30; // Local variable in main
    cout << "Inside main function:" << endl;
    cout << "Global variable: " << globalVar << endl;
    cout << "Local variable: " << localVar << endl;

    display();

    return 0;
}