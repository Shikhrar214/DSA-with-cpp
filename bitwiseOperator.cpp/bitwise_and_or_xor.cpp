#include<iostream>
using namespace std;

int ANDOpration(int a, int b){
    return a & b ;
}

int OROpration(int a, int b){
    return  a | b ;
}

int xorOpration(int a, int b){
    return  a ^ b ;
}

int main(){
    int a = 5, b = 7;
    cout<<"AND:  "<<ANDOpration(a, b)<<endl;

    cout<<"OR:   "<<OROpration(a, b)<<endl;

    cout<<"xor:  "<<xorOpration(a, b)<<endl;
    return 0;
}