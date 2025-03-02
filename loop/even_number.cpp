#include <iostream>
using namespace std;
int main(){
    int range ;
    cout <<"enter range: ";
    cin >> range;
    for(int i = 1; i<=range; i++){
        if(i%2==0){
            cout<< i << endl;
        }
    }
    return 0;
}