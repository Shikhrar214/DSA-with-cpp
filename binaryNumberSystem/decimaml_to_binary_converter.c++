#include <iostream>
using namespace std;

int decimal_to_binary(int a){
    
    int ans = 0, power = 1;
    while(a>0){
        int rem = a % 2;
        a /= 2;

        ans += (rem*power);
        power *= 10;
       

    }
    return ans;
}



int main(){
    int n;
    cout<<"Enter the decimal number: " <<endl;
    cin>>n;
    cout<<   decimal_to_binary(n)<<endl;

    
    return 0;
}