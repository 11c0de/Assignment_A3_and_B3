// 8. Define a class called Library with the following description: 
// Data members: 
// acc_num: stores the accession number of books 
// title:stores the title of the book 
// author: stores the name of author 
// Member function: 
// void input()- to input and store the accession numbers, title and author. 
// void complete()- to accept the number of days late, calculate and display the fine charged 
// the rate of Rs. 2 per day. 
// Void display()- to display the details in the following format: 
// Accession Number        Title        Author 

#include <iostream>
#include <string>
#include <iomanip> // for setw
using namespace std;

class Library {
private:
    int acc_num;
    string title;
    string author;

public:
    void input() {
        cout << "Enter Accession Number: ";
        cin >> acc_num;
        cin.ignore(); // to ignore the newline character left by cin
        cout << "Enter Title: ";
        getline(cin, title);
        cout << "Enter Author: ";
        getline(cin, author);
    }

    void complete() {
        int days_late;
        cout << "Enter the number of days late: ";
        cin >> days_late;
        int fine = days_late * 2;
        cout << "Fine charged: Rs. " << fine << endl;
    }

    void display() {
        cout << left << setw(30) << "Accession Number" 
             << left << setw(30) << "Title" 
             << left << setw(30) << "Author" << endl;
        cout << left << setw(30) << "----------------" 
             << left << setw(30) << "------" 
             << left << setw(30) << "-------" << endl;
        cout << left << setw(30) << acc_num 
             << left << setw(30) << title 
             << left << setw(30) << author << endl;
    }
};

int main() {
    Library lib;
    lib.input();
    lib.complete();
    lib.display();
    return 0;
}

// output:
// Enter Accession Number: 1234
// Enter Title: xyz
// Enter Author: washim
// Enter the number of days late: 12
// Fine charged: Rs. 24
// Accession Number              Title                         Author
// ----------------              ------                        -------
// 123                           XYZ                           WASHIm