#include <iostream>
using namespace std;

int main(){

   char ch = 'A';
   
   int n;
   cout<<"enter the number of rows";
   cin>>n;
   
   int i = 1;
   int sum = ch + n - 1; 
   
   while(i<=n){
        int j = 1;
        
        while(j <= i ){
              
            cout<<char(sum);
            j = j + 1;
            sum = sum + 1;
        }
        cout<<endl;
        i = i+1;
        sum=sum-1*i;
   }


}