#include <iostream>
using namespace std;

int main(){

    int array[] = {0,1,1,0,1,0,0,1,1,0,1,1,0};
    int size = sizeof(array)/sizeof(int);
    int j= size-1;

    int i = 0;     
    
    while ( i < j){

        if ( array[i] == 0){
            i++;
          
        }
        if (array[j] == 1){
            j--;
            
        }

        if (array[i] == 1 && array[j] ==0 ){
            swap(array[i], array[j]);
            i++;
            j--;
        }

    } 
    for(int i =0; i < size; i++ ){
        cout << array[i];
    } 
    

    
}