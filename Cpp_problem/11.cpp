/*Sum of elements
...........The Problem.............
For a given list, get the sum of each number in the list
..........Hint.............
Should be simple for you. Declare a sum variable. Then just loop through the list and add it to the sum.*/

#include <iostream>
using namespace std;
int main() {
    int n, sum = 0, element;

    cout << "Enter the number of elements in the list: ";
    cin >> n;

    cout << "Enter the elements of the list:" << endl;
    for (int i = 0; i < n; i++) {
        cin >> element;
        sum += element;  
    }

    cout << "The sum of elements in the list is: " << sum << endl;
    return 0;
}
