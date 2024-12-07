/*.....The Problem.........
Take money borrowed, interest and duration as input. Then, compute the compound interest rate.
......Hint......
Compound interest formula is:*/

#include <iostream>
#include <cmath> // For pow() function
using namespace std;

int main() {
    double principal, rate, time, compoundInterest, amount;
    int n; // Number of times interest is compounded per year

    // Input: Principal, interest rate, duration, and number of times compounded
    cout << "Enter the principal amount (money borrowed): ";
    cin >> principal;
    cout << "Enter the annual interest rate (in percentage): ";
    cin >> rate;
    cout << "Enter the time (in years): ";
    cin >> time;
    cout << "Enter the number of times the interest is compounded per year: ";
    cin >> n;

    // Convert interest rate from percentage to decimal
    rate = rate / 100;

    // Calculate the total amount A = P * (1 + r/n)^(nt)
    amount = principal * pow((1 + rate / n), n * time);

    // Calculate compound interest CI = A - P
    compoundInterest = amount - principal;

    // Output: Display the total amount and compound interest
    cout << "Total amount after interest: " << amount << endl;
    cout << "Compound interest: " << compoundInterest << endl;

    return 0;
}
