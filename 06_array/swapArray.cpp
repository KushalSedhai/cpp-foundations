#include <iostream>
using namespace std;

void reverse(int arr[], int size){

    int start = 0;
    int end = size - 1;
    while (start <= end){
        swap(arr[start], arr[end]);
        start++;
        end--;
    }

}

void print(int array[], int size){

    for(int i=0; i < size; i++){

        cout << array[i];
    }
    cout << endl;
}


int main(){

    int karr[5] = {1,2,3,4,5};
    int sarr[6] = {1,2,3,4,5,6};
    reverse(karr, 5);
    reverse(sarr, 6);

    print(karr, 5);
    print(sarr,6);
}