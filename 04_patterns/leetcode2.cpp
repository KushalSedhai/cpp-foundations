#include <iostream>
using namespace std;

int main(){

    int n = 0000000000000000000000000011010101;
    int a = n;
    int count = 0;

    while(a!=0){

        if(a&1){
            count++;
        }
        a = a>>1; 
    } 


}