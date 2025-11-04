#include <iostream>
using namespace std;

int main(){

    //if statement
    int a;
    int i;
    int n=10;
    cout << "Enter the value: " << endl;
    cin>>a;
    if (a > 0) {
        cout << "the value of a is greater than 0." << endl;
    }

    else if (a == 0) {
        cout << "The value is 0." << endl;
    }

    else{
        cout << "the value is negative" << endl;
    }
    
    // while loop

    cout << "Enter the value of i " << endl;
    cin>> i;

    while( i<n){
        cout << i << endl;
        i = i + 1;
    } 


    
}