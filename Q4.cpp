// 4. Write a program to input a number and print whether the number is a special number or 
// not. A number is said to be a special number, if the sum of the factorial of the digits of 
// the number is same as the original number. Example: 145 is a special number, because 1! 
// + 4! + 5! = 145 

#include <iostream>
using namespace std;

// Function to calculate factorial of a digit
int factorial(int n) {
    int fact = 1;
    for (int i = 1; i <= n; i++) {
        fact *= i;
    }
    return fact;
}

int main() {
    int number, originalNumber, sum = 0;

    // Input the number
    cout << "Enter a number: ";
    cin >> number;

    originalNumber = number;

    // Calculate the sum of the factorial of the digits
    while (number > 0) {
        int digit = number % 10;
        sum += factorial(digit);
        number /= 10;
    }

    // Check if the sum is equal to the original number
    if (sum == originalNumber) {
        cout << originalNumber << " is a special number." << endl;
    } else {
        cout << originalNumber << " is not a special number." << endl;
    }

    return 0;
}

// output:
// Enter a number: 145
// 145 is a special number.

// Enter a number: 147
// 147 is not a special number.
