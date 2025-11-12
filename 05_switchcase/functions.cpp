#include <iostream>
using namespace std;

int sum(int x, int y){

    int sum = x + y;
    return sum; 
}

int main(){

    int ans, a, b;
    cout << "Enter the value of a and b" << endl;
    cin >> a >> b; 
    ans = sum(a, b);
    cout << "The sum is: " << ans;
}