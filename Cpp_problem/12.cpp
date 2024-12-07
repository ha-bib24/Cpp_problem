/*Largest element of a list
........The problem...........
Find the largest element of a list.
.........Hints...........
Take the first element as the largest number. Then loop through the list and compare each element.*/

#include <iostream>
using namespace std;
int main() {
    int n, element, largest;

    cout << "Enter the number of elements in the list: ";
    cin >> n;

    if (n <= 0) {
        cout << "The list is empty!" << endl;
        return 0;
    }

    cout << "Enter the elements of the list:" << endl;
    cin >> largest; 

    for (int i = 1; i < n; i++) {
        cin >> element;
        if (element > largest) {
            largest = element; 
        }
    }

    cout << "The largest element in the list is: " << largest << endl;
    return 0;
}
