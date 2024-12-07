#include <iostream>
#include <stack>
using namespace std;

void decimalToBinary(int n) {
    stack<int> binaryDigits;

    // Keep dividing the number by 2 and storing the remainder
    while (n > 0) {
        binaryDigits.push(n % 2);
        n /= 2;
    }

    // If the number is 0, directly print 0
    if (binaryDigits.empty()) {
        cout << 0;
    } else {
        // Pop the remainders (which are now in reverse order) to get the binary number
        while (!binaryDigits.empty()) {
            cout << binaryDigits.top();
            binaryDigits.pop();
        }
    }
    cout << endl;
}

int main() {
    int decimalNumber;
    cout << "Enter a decimal number: ";
    cin >> decimalNumber;

    cout << "Binary equivalent: ";
    decimalToBinary(decimalNumber);

    return 0;
}
