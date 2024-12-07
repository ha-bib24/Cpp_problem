/*.......The Problem........
With a given integral number n, write a program to calculate the sum of cubes.
......Hints.......
Cubes mean power of 3. Hence, the cube of 9 is 9**3.
Here you have to calculate the cube of a series. If you want to calculate the cube up to the number n. The series will look like-
1^3+2^3+3^3+4^3+ .. .. .. +n^3
If you remembered the sum of the square, this one will be easier for you.*/

#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter an integral number n: ";
    cin >> n;

    int sum = n * (n + 1) / 2;

    int sumOfCubes = sum * sum;

    cout << "The sum of cubes of the first " << n << " integers is: " << sumOfCubes << endl;

    return 0;
}
