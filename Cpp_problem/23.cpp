/*.....The Problem...........
You borrowed $5000 for 2 years with 2% interest per year. Calculate the simple interest to know how much you have to pay?
.........Hint.........
Just take amount, duration and interest rate.
You have to multiply these three. And, don’t forget: you have to convert percent to a fraction by dividing it by 100.*/


#include <iostream>
using namespace std;

int main() {
    double principal, rate, time, simpleInterest;

    // Input: Principal amount, interest rate, and time
    cout << "Enter the principal amount (in dollars): ";
    cin >> principal;
    cout << "Enter the annual interest rate (in percentage): ";
    cin >> rate;
    cout << "Enter the time (in years): ";
    cin >> time;

    // Calculate simple interest using the formula: SI = (P * r * t) / 100
    simpleInterest = (principal * rate * time) / 100;

    // Output: Display the simple interest
    cout << "Simple Interest: $" << simpleInterest << endl;
    cout << "Total amount to be paid: $" << (principal + simpleInterest) << endl;

    return 0;
}
