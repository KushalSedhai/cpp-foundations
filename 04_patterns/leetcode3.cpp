#include <iostream>
using namespace std;

//Complement of base 10 integer
// 2 --> 10 become 01 in binary and is converted to decimal 1
// 5 --> 101 becomes 010 in binary and is converted to decimal 2  

int main(){
    
    int n;
    cout << "Enter a number:" << endl;
    cin >> n;

    if (n ==0){
        cout << "Result is: " << 1;
    }
    else{
    int m = n;
    int mask = 0;
    while (m != 0){
        //comment            
        mask = mask << 1 | 1;
        m = m >> 1;
    }
int result = (~n) & mask;
    cout << "Result of the complement is: " << result << endl; 
    }
}