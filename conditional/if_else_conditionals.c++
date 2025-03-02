#include<iostream>
using namespace std;
int main(){
    int num;

    cout<<"Enter A Number" << endl;
    cin>> num;
    cout << "Checking number is positive or negative." <<endl;
    
    if(num > 0 ){
        cout<<num <<": is a positive number" <<endl;
    }else{
        cout <<"negitive number" <<endl;
    }
    cout<< "check completed." << endl;

    // check which number is greater

    int a, b;
    cout<<"Enter two numbers to check which is greater" << endl;

    cin >> a >>b;
    cout << "Checking........." <<endl;

    if(a>b){
        cout<<"graeter number is: " << a <<endl;

    }else{
        cout<<"greater number is: " <<b <<endl;
    }

    cout<<"check completed. " <<endl;
    return 0;
}