#include <iostream>
using namespace std;

// when i am passing the array in the function we are passing the actual reference and not by value like the general case.

void Arr(int kar[], int size){

    cout << "In the function " << endl;
    kar[0] = 11;
    for(int i=0; i<5; i++){
        cout << "index " << i << ": " << kar[i] << endl;
    }

}

int main(){
    
    int car[5] = {100, 120, 110, 90, 80}; 
    
    for(int i=0; i<5; i++){
        cout << "index " << i << ": " << car[i] << endl;
    } 
    
    Arr(car, 5);

    cout << "out in the main again:" << endl; 

    for(int i=0; i<5; i++){
        cout << "index " << i << ": " << car[i] << endl;
    } 

}