/*Average of numbers
...........The problem........
Take numbers from a user and show the average of the numbers the user entered.
.........Hints.............
To solve this problem.
First, ask the user - How many numbers you want to enter?
Then, run a for-loop. Each time, take input from the user and put it in a list.
Once you get all the numbers, you can send the list to the sum function. The sum function will add all the numbers and give you the total.
Finally, divide the total by the number of elements the user entered.
That’s it, you will get the answer.
Want to try it yourself first? Go to the code editor and try it.*/

#include <iostream>
#include <vector>
using namespace std;

int main() {
    // Declare a variable to hold the number of inputs
    int n;
    
    // Ask the user how many numbers they want to enter
    cout << "How many numbers do you want to enter? ";
    cin >> n;

    // Declare a vector to hold the numbers
    vector<double> numbers(n);
    
    // Loop to take input from the user
    for (int i = 0; i < n; i++) {
        cout << "Enter number " << (i + 1) << ": ";
        cin >> numbers[i];
    }

    // Calculate the sum of the numbers
    double sum = 0;
    for (int i = 0; i < n; i++) {
        sum += numbers[i];
    }

    // Calculate the average
    double average = sum / n;

    // Output the average
    cout << "The average of the numbers is: " << average << endl;

    return 0;
}