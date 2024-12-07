/*.......The problem..........
Find the floor division of two numbers.

.......Hints.........
Floor division means the integer part of a division operation. For example, if you divide 17/5 the quotient will be 3.4.
Here the integer part is 3.*/

#include <iostream>

int main() {
    // Declare two numbers
    int numerator = 17;
    int denominator = 5;

    // Perform floor division (integer division)
    int result = numerator / denominator;

    std::cout << "Floor division of " << numerator << " by " << denominator << " is: " << result << std::endl;

    return 0;
}
