#include <iostream>
using namespace std;

int binary_to_decimal(int a){
    
    int ans = 0, power = 1;
    while(a>0){
        int rem = a % 10;
       ans += (rem * power);
       a /= 10;
       power*=2;

    }
    return ans;
}



int main(){
    int n;
    cout<<"Enter the decimal number: " <<endl;
    cin>>n;
    cout<<   binary_to_decimal(n)<<endl;

    
    return 0;
}