/*Sum of squares
.........The problem.........
Take a number as input. Then get the sum of the numbers. If the number is n. Then get
0^2+1^2+2^2+3^2+4^2+.............+n^2
.......Hints..........
Once again, run a for loop with a range. Inside the loop, use the power of 2. Then add that power to a sum variable. That’s it.*/

#include <iostream>
using namespace std;

int main() {
    int n, sum = 0;

    cout << "Enter a number: ";
    cin >> n;

    // Loop to calculate the sum of squares
    for (int i = 0; i <= n; i++) {
        sum += i * i;  // Add i^2 to the sum
    }

    cout << "The sum of squares from 0^2 to " << n << "^2 is: " << sum << endl;
    return 0;
}
