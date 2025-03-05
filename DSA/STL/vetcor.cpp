#include<iostream>
#include<vector>
using namespace std;
int main(){

    vector <int> vec = {1,2,3,4,5,6,7} ; 
    cout<<vec[0]<<endl  <<endl;
    cout<<"Size: "<<vec.size()<<endl;
    for(int i : vec){
        cout<<i<<endl;
    }
    // another approach
    vector <int> anotherVec (5, 1);
    cout<<"another Vector"<<endl;
    for(int i: anotherVec){
        cout<<i<<endl;
    }
    return 0;
}