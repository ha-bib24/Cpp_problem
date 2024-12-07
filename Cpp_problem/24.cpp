/*............The problem..........
Take three sides of a triangle. And then calculate the area of the triangle.
...........How it works............
To calculate the area of the triangle. First, calculate the half of the perimeter. Here perimeter is the sum of each side of the triangle.
Let’s call it s.
Then you have to perform square root of the formula like below-
s = (a+b+c)/2
area = √(s(s-a)*(s-b)*(s-c))*/

#include <iostream>
#include <cmath> // For sqrt() function
using namespace std;

int main() {
    double a, b, c, s, area;

    // Input: Get the lengths of the three sides of the triangle
    cout << "Enter the length of side a: ";
    cin >> a;
    cout << "Enter the length of side b: ";
    cin >> b;
    cout << "Enter the length of side c: ";
    cin >> c;

    // Calculate the semi-perimeter (s)
    s = (a + b + c) / 2;

    // Calculate the area using Heron's formula
    area = sqrt(s * (s - a) * (s - b) * (s - c));

    // Output: Display the area of the triangle
    cout << "The area of the triangle is: " << area << " square units" << endl;

    return 0;
}
