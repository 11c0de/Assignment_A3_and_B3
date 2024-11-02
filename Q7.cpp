// 7. Using switch statement, write a menu driven program for the following: 
// (a) To find and display the sum of the series given below: 
// S=1-2+3-4+5-6+………100 
// (b) To display the following series: 
// 11 111 1111 11111 111111 
// For an incorrect option, an appropriate error message should be displayed. 

#include <iostream>
using namespace std;

int main() {
    int choice;

    cout << "Menu:\n";
    cout << "1. Find and display the sum of the series S = 1 - 2 + 3 - 4 + ... + 100\n";
    cout << "2. Display the series: 11 111 1111 11111 111111\n";
    cout << "Enter your choice: ";
    cin >> choice;

    switch (choice) {
        case 1: {
            int sum = 0;
            for (int i = 1; i <= 100; i++) {
                if (i % 2 == 0) {
                    sum -= i;
                } else {
                    sum += i;
                }
            }
            cout << "Sum of the series S = 1 - 2 + 3 - 4 + ... + 100 is: " << sum << endl;
            break;
        }
        case 2: {
            int term = 11;
            for (int i = 1; i <= 5; i++) {
                cout << term << " ";
                term = term * 10 + 1;
            }
            cout << endl;
            break;
        }
        default:
            cout << "Incorrect choice. Please select a valid option from the menu." << endl;
    }

    return 0;
}

// output:
// Menu:
// 1. Find and display the sum of the series S = 1 - 2 + 3 - 4 + ... + 100
// 2. Display the series: 11 111 1111 11111 111111
// Enter your choice: 1
// Sum of the series S = 1 - 2 + 3 - 4 + ... + 100 is: -50

// Menu:
// 1. Find and display the sum of the series S = 1 - 2 + 3 - 4 + ... + 100
// 2. Display the series: 11 111 1111 11111 111111
// Enter your choice: 2
// 11 111 1111 11111 111111 