#include <iostream>
using namespace std;
int main(){
    int n = 25, res = 1;
    for (int i = 1; i <= n; i++)
    {
        res = i*res;
        
    }
    cout<<res<<endl;
    return 0;
}