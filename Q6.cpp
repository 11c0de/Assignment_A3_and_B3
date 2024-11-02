// 6. Create a class called NUMBER having the following members: 
// Variables: a & b of integer type 
// Member function: 
// void swap() --that interchanges the value of a & b. 
// void display() – that displays the data members. 
// In the main() method input 2 numbers to interchange the values. Use class & object for 
// the implementation of the program.  

#include <iostream>
using namespace std;

class NUMBER {
public:
    int a, b;

    // Function to swap the values of a and b
    void swap() {
        int temp = a;
        a = b;
        b = temp;
    }

    // Function to display the values of a and b
    void display() {
        cout << "a = " << a << ", b = " << b << endl;
    }
};

int main() {
    NUMBER num;

    // Input two numbers
    cout << "Enter two numbers: ";
    cin >> num.a >> num.b;

    // Display the original values
    cout << "Original values: ";
    num.display();

    // Swap the values
    num.swap();

    // Display the swapped values
    cout << "Swapped values: ";
    num.display();

    return 0;
}

// output:
// Enter two numbers: 12 24
// Original values: a = 12, b = 24
// Swapped values: a = 24, b = 12