//1. Write a program in C++ to input three angles of a triangle and check whether it forms a 
// triangle or not, if it forms a triangle, check whether it is as equilateral, isosceles or a 
// scalene triangle.  

#include <iostream>
using namespace std;

int main() {
    int angle1, angle2, angle3;
    
    // Input angles
    cout << "Enter three angles of a triangle: ";
    cin >> angle1 >> angle2 >> angle3;
    
    // Check if the angles form a triangle
    if (angle1 + angle2 + angle3 == 180 && angle1 > 0 && angle2 > 0 && angle3 > 0) {
        cout << "The angles form a triangle." << endl;
        
        // Check the type of triangle
        if (angle1 == angle2 && angle2 == angle3) {
            cout << "It is an equilateral triangle." << endl;
        } else if (angle1 == angle2 || angle2 == angle3 || angle1 == angle3) {
            cout << "It is an isosceles triangle." << endl;
        } else {
            cout << "It is a scalene triangle." << endl;
        }
    } else {
        cout << "The angles do not form a triangle." << endl;
    }
    return 0;
}

// output:
// Enter three angles of a triangle: 60 60 60
// The angles form a triangle.
// It is an equilateral triangle.

// Enter three angles of a triangle: 45 90 45
// The angles form a triangle.
// It is an isosceles triangle.

// Enter three angles of a triangle: 30 60 90
// The angles form a triangle.
// It is a scalene triangle.

// Enter three angles of a triangle: 45 90 90
// The angles do not form a triangle.