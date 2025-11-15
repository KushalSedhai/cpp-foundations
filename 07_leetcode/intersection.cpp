#include <iostream>
using namespace std;

int main(){

    int arr1[] = {1,2,3,3,4,5,6,7,8};
    int arr2[] = {1,1,2,2,3,3,4,5,6};

    int test = 0;

    for(int i =0; i < 7; i++){

        test = arr1[i];

        for(int j=0; j < 7; j++){

            if (test == arr2[j]){
                cout << arr2[j];
                break;
            }
        } 
    } 

}