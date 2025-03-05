// linear search
// time complexity of linear search = O(n)

#include<iostream>
using namespace std;
int main(){
    int arr [] = {2,0,3,9,4,7,8,7,3,4,3};
    int target = 9;
    int size = sizeof(arr)/sizeof(arr[0]);
    for(int i = 0; i < size; i++){
        if(arr[i] == target){
            cout<<"index: " <<i << "   element: "<<arr[i] << endl;
        }
    }
    return 0;
}