#include<iostream>
using namespace std;

int main(){

    int arr[] = {1,2,3,4,5,6,1,2,5,3,6}; 

    int ans = 0;

    for (int i = 0; i < 11; i++){
        ans = ans ^ arr[i];    
    }

    cout<< ans;
}