#include <iostream>
using namespace std;

int main(){

    int n;
    cout << "Enter the number:" << endl;
    cin >> n; 

    int a;
    a = n;
    int mult = 1;
    int add = 0;
    
    while(a!=0){         //153
        
        int rem;
        rem = a % 10;       //3
        mult = mult * rem;  //1*3
        add = add + rem;    // 0+3
        a = a / 10;     // 15

    } 

    cout << "The output is : " << mult - add;
}