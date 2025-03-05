// revers an array
#include<iostream>
using namespace std;


int main(){
    int arr[] = {1, 2, 3, 4, 5};
    int size = sizeof(arr)/sizeof(arr[0]);
    cout << size<<endl;
    int end = size-1; 
    
    for (int i = 0 ; i < end/2 ; i++){
        int temp = arr[0];
        arr[0] = arr[end];
        arr[end] = temp;

        if(end == i || end>i){
            break;
        }
        end-=1;
        for(int i = 0; i < size ; i++){
            cout<<arr[i]; 
        }
    }

    // for(int i = 0; i < size ; i++){
    //     cout<<arr[i]; 
    // }
   
    cout<<endl;
    ;
    return 0;
}