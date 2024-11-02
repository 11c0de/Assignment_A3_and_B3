//2. Write a C++ program to input 10 integers and find the sum of two-digits as well as three 
// digit numbers separately. 
#include <iostream>
using namespace std;

int main() {
    int numbers[10];
    int sumTwoDigits = 0, sumThreeDigits = 0;

    // Input 10 integers
    cout << "Enter 10 integers: ";
    for (int i = 0; i < 10; i++) {
        cin >> numbers[i];
    }

    // Calculate the sums
    for (int i = 0; i < 10; i++) {
        if (numbers[i] >= 10 && numbers[i] <= 99) {
            sumTwoDigits += numbers[i];
        } else if (numbers[i] >= 100 && numbers[i] <= 999) {
            sumThreeDigits += numbers[i];
        }
    }

    // Output the results
    cout << "Sum of two-digit numbers: " << sumTwoDigits << endl;
    cout << "Sum of three-digit numbers: " << sumThreeDigits << endl;
    
    return 0;
}

// output:
// Enter 10 integers: 12 34 67 900 300 450 20 78 22 10
// Sum of two-digit numbers: 243
// Sum of three-digit numbers: 1650