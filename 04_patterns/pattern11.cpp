#include <iostream>
using namespace std;

int main(){

    int n;
    cin>>n;
    cout<<0<<endl;
    cout<<1<<endl;
    int a=0, b=1;


    while(n >= 1){
        
        int c = a+b;
        cout<<c<<endl;
        a = b;
        b = c;

        n = n - 1;
         }
}