#include <iostream>
using namespace std;

int main(){

    int n;
    cout << "Enter the number of rows u want which is eual to greastest value: " << endl;
    cin >> n;

    int i = 1;

    while(i <= n) {

        int j = n;

        while(j >= 1 ){

            cout << j << " ";
            j = j - 1;
        } 
        cout << endl;
        i = i + 1; 
    } 
}