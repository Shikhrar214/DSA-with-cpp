# include <iostream>
using namespace std;
int main(){
    int range, res;
    cout<<"Enter";
    cin>>range;
    for (int i = 1; i <= range; i++)
    {
        for (int j = 1; j <= 10; j++)
        {
            res = i*j;
            cout<<res<<endl;
        }
        cout<<endl;
        
    }
    
    return 0;
}