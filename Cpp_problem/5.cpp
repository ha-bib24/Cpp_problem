/*........The problem.........
Swap two variables.
To swap two variables: the value of the first variable will become the value of the second variable. 
On the other hand, the value of the second variable will become the value of the first variable.

........Hints........
To swap two variables, you can use a temp variable.*/

#include <iostream>
int main() {
    int a = 5;
    int b = 10;

   
    std::cout << "Before swapping: a = " << a << ", b = " << b << std::endl;

    int temp = a;  
    a = b;         
    b = temp;     

    
    std::cout << "After swapping: a = " << a << ", b = " << b << std::endl;

    return 0;
}
