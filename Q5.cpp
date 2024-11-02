// 5. Design a class to overload a function sum() as follows: 
// (a) void sum( int n) – with one int argument that finds the sum of the digits in n. 
// (b) void sum( int a, int b)- with two arguments that finds the sum of these numbers cube 
// roots.  
// Also create the main() methos to call the above methods.  

#include <iostream>
#include <cmath>
using namespace std;

class Calculator {
public:
    // Function to find the sum of the digits of a number
    void sum(int n) {
        int digitSum = 0;
        while (n > 0) {
            digitSum += n % 10;
            n /= 10;
        }
        cout << "Sum of the digits: " << digitSum << endl;
    }

    // Function to find the sum of the cube roots of two numbers
    void sum(int a, int b) {
        double cubeRootSum = cbrt(a) + cbrt(b);
        cout << "Sum of the cube roots: " << cubeRootSum << endl;
    }
};

int main() {
    Calculator calc;
    int num1, num2;

    // Example usage of sum(int n)
    cout << "Enter a number to find the sum of its digits: ";
    cin >> num1;
    calc.sum(num1);

    // Example usage of sum(int a, int b)
    cout << "Enter two numbers to find the sum of their cube roots: ";
    cin >> num1 >> num2;
    calc.sum(num1, num2);

    return 0;
}

// output:
// Enter a number to find the sum of its digits: 121
// Sum of the digits: 4
// Enter two numbers to find the sum of their cube roots: 2 4
// Sum of the cube roots: 2.84732