/*..........The Problem........
Compute gravitational force between two objects.
......Hint......
The formula for gravitational force is F = G m^1m^2/r^2*/

#include <iostream>
using namespace std;

int main() {
    const double G = 6.67430e-11; // Gravitational constant in N(m^2/kg^2)
    double m1, m2, r, force;

    // Input: Mass of the two objects and distance between them
    cout << "Enter the mass of the first object (in kg): ";
    cin >> m1;
    cout << "Enter the mass of the second object (in kg): ";
    cin >> m2;
    cout << "Enter the distance between the two objects (in meters): ";
    cin >> r;

    // Calculate gravitational force using the formula F = G * m1 * m2 / r^2
    force = (G * m1 * m2) / (r * r);

    // Output: Display the gravitational force
    cout << "The gravitational force between the objects is: " << force << " N" << endl;

    return 0;
}
