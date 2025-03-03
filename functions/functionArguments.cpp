#include <iostream>
using namespace std;

// function definition
int add(int a, int b){
    // function body   
    cout << "sum: "<<a+b << endl;
    return a+b;
}
int main(){
    int num1 = 5, num2 = 6;
    // function call
    add(num1, num2);
    int result = add(10, 20);
    cout<<"result: "<<result<<endl;
   return 0;
}

// this function takes two arguments and returns the sum of the two arguments. and it is known pass by value.