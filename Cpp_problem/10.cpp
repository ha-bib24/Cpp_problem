/*Sum of Elements
...........The problem.........
For a given list, get the sum of each number in the list
........Hints..............
Should be simple for you. Declare a sum variable. Then just loop through the list and add it to the sum.*/

#include <iostream>
#include <vector>  // To use vector for storing the list
using namespace std;

int main() {
    int n, element, sum = 0;
    cout << "Enter the number of elements in the list: ";
    cin >> n;

    vector<int> list;  // Vector to store the list of numbers

    cout << "Enter the elements of the list:" << endl;
    for (int i = 0; i < n; i++) {
        cin >> element;
        list.push_back(element);  // Add the element to the list
    }

    // Calculate the sum of elements
    for (int i = 0; i < n; i++) {
        sum += list[i];  // Add each element to the sum
    }

    cout << "The sum of elements in the list is: " << sum << endl;
    return 0;
}
