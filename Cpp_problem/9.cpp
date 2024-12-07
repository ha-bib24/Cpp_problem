/*Divisible by 3 and 5
........The problem.......
For a given number, find all the numbers smaller than the number. Numbers should be divisible by 3 and also by 5.
........Hints..........
So, you have to check two conditions: make sure the number is divisible by 3,
 and also by 5. Hence, you will need to use two conditions.*/

 #include <iostream>
using namespace std;

int main() {
    int num;
    cout << "Enter a number: ";
    cin >> num;

    cout << "Numbers smaller than " << num << " divisible by 3 and 5 are: ";

    for (int i = 1; i < num; i++) {
        if (i % 3 == 0 && i % 5 == 0) {
            cout << i << " ";
        }
    }

    cout << endl;
    return 0;
}
