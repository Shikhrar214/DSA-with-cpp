#include<iostream>
using namespace std;



int shiftLeft(int a){
    return ( a<<2 );
}

int shiftRight(int a){
    return (a >> 2) ;
}

int main(){
    
    int a = 5;

    cout<<"Right Shift:  "<<shiftRight(a)<<endl;

    cout<<"Left Shift:   "<<shiftLeft(a)<<endl;

    
    return 0;
}