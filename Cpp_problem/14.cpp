/*Second Largest
......The problem..........
For a list, find the second largest number in the list.
..........Hints.............
Finding the largest number was super easy. To find the second largest number, you have to keep track of two variables. Then compare.*/

#include <iostream>
#include <vector>
#include <limits.h> // For INT_MIN

using namespace std;

int findSecondLargest(const vector<int>& nums) {
    if (nums.size() < 2) {
        // If there are less than 2 elements, there's no second largest
        return INT_MIN;
    }

    int largest = INT_MIN, secondLargest = INT_MIN;

    for (int num : nums) {
        // If the current number is larger than largest
        if (num > largest) {
            secondLargest = largest;  // Update second largest
            largest = num;            // Update largest
        }
        // If the current number is less than largest but larger than secondLargest
        else if (num > secondLargest && num != largest) {
            secondLargest = num;
        }
    }

    return secondLargest;
}

int main() {
    vector<int> nums;
    int n, input;

    cout << "Enter the number of elements: ";
    cin >> n;

    if (n < 2) {
        cout << "The list must contain at least two numbers." << endl;
        return 0;
    }

    cout << "Enter the elements: ";
    for (int i = 0; i < n; ++i) {
        cin >> input;
        nums.push_back(input);
    }

    int result = findSecondLargest(nums);

    if (result != INT_MIN)
        cout << "The second largest number is: " << result << endl;
    else
        cout << "No second largest number found (all elements may be equal)." << endl;

    return 0;
}
