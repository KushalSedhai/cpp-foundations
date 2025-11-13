// program to count the active number of bits
#include <iostream>
using namespace std;


int main(){

    int n;
    cout << "enter a number: " <<endl;
    cin >> n;

    int count = 0; 

    while(n != 0 ){

        if ((n & 1) == 1){
            count++;
        }
        n = n >> 1;
    }

    cout << "The active number of bits is:  " << count << endl;
}