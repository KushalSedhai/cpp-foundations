#include <iostream>
using namespace std;

void findDuplicate(int Arr[], int size){
    int ans=0;
    size = size - 1;

    for( int i = 0; i < size; i++){

        ans = ans ^ i;
    }  

    size = size + 1;

    for (int i = 0; i < size; i++){
        ans = ans ^ Arr[i];
    }

    cout <<"the returning element is: " << ans << endl;
} 

int main(){

    int array[] = {1,2,3,0,5,4,5,6,7};
    findDuplicate(array, 9);
    
}