#include <iostream>
using namespace std;

int swapy(int array[], int size){

    int first= 0;
    int second = 1;

    while ((second < size) && (first < size)){

        swap(array[first], array[second]);
        first = first + 2 ;
        second = second + 2;
    } 

    return 0;
}


void print(int array[], int size){

    for(int i = 0; i < size; i++){
        cout << array[i]; 
    } 
    cout << endl;
}

int main(){

    int arr1[] = {1,2,3,4,5,6};
    int arr2[] = {1,2,3,4,5,6,7};

    swapy(arr1, 6);
    swapy(arr2, 7);

    print(arr1, 6);
    print(arr2, 7);
 
}