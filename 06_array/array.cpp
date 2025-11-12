#include <iostream>
using namespace std;

void Arr(int Dost[], int size){

    for(int i= 0; i < size; i++){
        cout << "Index" << i << ": " << Dost[i] << endl;
    }   
}

int main(){

    int array[3] = {1,2,3};
    //cout << "1st index is " << array[1] << endl;

    int k[20] = {0,1,2,3,4};
    /*for ( int i = 0; i < 20; i++ ){
        cout << "Printing index " << i << " : " << k[i] << endl;
    } */
   Arr(array, 3); 
   Arr(k, 20);

   cout << INT_MIN << endl;
   
    
}