// print
// 123
// 456
// 789
#include<iostream>
using namespace std;
int main(){
    int n = 3;
    int r = 1;
    for (int i = 0; i < n; i++){
        for (int j = 0; j < n; j++)
        {
            cout<<r;
            r = r+1;
        }
        cout<<endl;
        
    }
}
