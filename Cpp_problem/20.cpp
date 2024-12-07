/*............The problem...........
Calculate grade of five subjects.
...........Hint.........
So, you have to take five inputs. These will be the marks of five subjects. Then, create the average.
Once you have the average. It just running an if-else. And decide the grade.*/

#include <iostream>
using namespace std;

int main() {
    float marks[5], total = 0, average;
    char grade;

    for (int i = 0; i < 5; i++) {
        cout << "Enter marks for subject " << i + 1 << ": ";
        cin >> marks[i];
        total += marks[i]; 
    }

    average = total / 5;

    if (average >= 90) {
        grade = 'A';
    } else if (average >= 80) {
        grade = 'B';
    } else if (average >= 70) {
        grade = 'C';
    } else if (average >= 60) {
        grade = 'D';
    } else {
        grade = 'F';
    }

    cout << "Average Marks: " << average << endl;
    cout << "Grade: " << grade << endl;

    return 0;
}
