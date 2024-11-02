//3. Write a program to input 10 numbers and print the largest prime number if any. 
#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int numbers[10];
    int largestPrime = -1;

    // Input 10 numbers
    cout << "Enter 10 numbers: ";
    for (int i = 0; i < 10; i++) {
        cin >> numbers[i];
    }

    // Check each number to see if it is prime and find the largest prime
    for (int i = 0; i < 10; i++) {
        bool isPrime = true; 
        if (numbers[i] <= 1) {
            isPrime = false;
        } else {
            for (int j = 2; j <= sqrt(numbers[i]); j++) {
                if (numbers[i] % j == 0) {
                    isPrime = false;
                    break;
                }
            }
        }
        if (isPrime && numbers[i] > largestPrime) {
            largestPrime = numbers[i];
        }
    }

    // Output the result
    if (largestPrime != -1) {
        cout << "The largest prime number is: " << largestPrime << endl;
    } else {
        cout << "There are no prime numbers in the input." << endl;
    }

    return 0;
}

// output:
// Enter 10 numbers: 1 2 3 4 5 6 7 8 9 10
// The largest prime number is: 7