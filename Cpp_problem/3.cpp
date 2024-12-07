#include <iostream>
#include <cstdlib> // For rand() and srand()
#include <ctime>   // For time()
#include <cmath>   // For pow()

int main() {
    // Seed the random number generator
    srand(time(0));

    // Generate a random number between 0 and 10
    int randomNumber = rand() % 11;
    std::cout << "Random number between 0 and 10: " << randomNumber << std::endl;

    // Calculate 4 raised to the power of 3
    int result = pow(4, 3);
    std::cout << "4^3 = " << result << std::endl;

    return 0;
}
