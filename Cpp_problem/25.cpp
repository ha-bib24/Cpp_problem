/*.....The Problem..........
You have three lists of words. Create all possible combinations of sentences by taking one element from each list.
......Hint..........
For each list, run a for loop for its len. This would be nested three for loops.
Under the last loop, access elements from each loop and show them as output.*/

#include <iostream>
#include <vector>
using namespace std;

int main() {
    // Three lists of words
    vector<string> list1 = {"I", "You", "We"};
    vector<string> list2 = {"are", "were", "will be"};
    vector<string> list3 = {"happy", "sad", "excited"};

    // Nested loops to generate all possible combinations
    for (int i = 0; i < list1.size(); i++) {
        for (int j = 0; j < list2.size(); j++) {
            for (int k = 0; k < list3.size(); k++) {
                // Output the combination of words from the three lists
                cout << list1[i] << " " << list2[j] << " " << list3[k] << "." << endl;
            }
        }
    }

    return 0;
}
