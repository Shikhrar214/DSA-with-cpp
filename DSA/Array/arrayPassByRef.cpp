#include <iostream>
using namespace std;

// Function to print array elements
void displayArray(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}
// pass by ref
void incrementArrEle(int arr[], int size){
    for(int i = 0; i < size; i++){
        arr[i] = arr[i]+1;
    }

    for(int i = 0; i < size; i++){
        cout<<arr[i] << endl;
    }
}

int main() {
    int myArray[] = {1, 2, 3, 4, 5};

    // formula logic for array size
    int size = sizeof(myArray) / sizeof(myArray[0]);

    incrementArrEle(myArray, size);//pass by ref
    //printing arr using loop
    displayArray(myArray, size); 

    

    return 0;
}

