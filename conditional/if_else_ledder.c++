#include <iostream>

using namespace std;

int main() {
    int num;
    cout<< "Enter Nmber"; cin >> num;
    cout << "Checking number is positive or negative and greater than 20 or not." << endl;
    if(num > 0){
        cout<< num << " is a positive number" << endl;
        }
    else if (num == 0){
        cout<< num << " is zero" << endl;
    }
    else if (num < 0){
        cout<< num << " is a negative number" << endl;

    }
    if(num > 20){
        cout<< num << " is greater than 20" << endl;
    }
    else{
        cout<< num << " is less than 20" << endl;
    }
    return 0;
}