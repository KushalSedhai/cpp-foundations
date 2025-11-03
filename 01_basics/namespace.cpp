//Understandig 
#include <iostream>

namespace first{
    int x = 1;
}

namespace second{
    int x =2; 
}

int main(){
    std::cout << "Understanding namespaces" << std::endl;
    int x = 0;
    
    std::cout << "The value of x without namespace is: " << x << std::endl;

    std::cout << "The value of x with namespace first is: " << first::x << std::endl; 
     

}