#include <iostream>
using namespace std;

// Function to print array elements
void displayArray(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

void simpleDisplayArray(int arr[], int size){
    cout<<arr[0]<<endl;
    cout<<arr[1]<<endl;
    cout<<arr[2]<<endl;
    cout<<arr[3]<<endl;
    cout<<arr[4]<<endl;
   
}

int main() {
    int myArray[] = {1, 2, 3, 4, 5};

    // formula logic for array size
    int size = sizeof(myArray) / sizeof(myArray[0]);

    // simple way to print array element

    simpleDisplayArray(myArray, size);
    // using loop
    displayArray(myArray, size); 

    

    return 0;
}

