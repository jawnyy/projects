#include <iostream>
#include <string>
#include <fstream>
#include <cstdlib>
using namespace std;

class Degree {
    public:
    void MajorChoice(int choice) {
        if (choice == 1) {
            cout << "\n";
            cout << "You chose 1 PagMan\n"; // classes go here
        }
        else if (choice == 2) {
            cout << "\n";
            cout << "You chose 2 PagMan\n"; // classes go here
        }
        else if (choice == 3) {
            cout << "\n";
            cout << "You chose 3 PagMan\n"; // classes go here
        }
        else if (choice == 4) {
            cout << "\n";
            cout << "You chose 4 PagMan\n"; // classes go here
        }
        else if (choice == 5) {
            cout << "\n";
            cout << "You chose 5 PagMan\n"; // classes go here
        }
    }
};

class Student {
    public:
    //not really sure just make so student info can be obtained
};


int main() {
    Degree degree;
    Student student;


    cout << "\n";
    cout << "Menu:\n";
    cout << "Student Information - 1\n";
    cout << "Major Degree - 2\n";
    cout << "Courses - 3\n";
    cout << "Quit - 4\n";
    cout << "Choose an option: ";
    int userChoice;
    cin >> userChoice;

    if (userChoice == 1){
        cout << "1";
    }
    if (userChoice == 2) {
        cout << "\n";
        cout << "Computer Science - 1\n";
        cout << "Civil Engineer - 2\n";
        cout << "Biology - 3\n";
        cout << "Criminal Justice - 4\n";
        cout << "Business - 5\n";
        cout << "Enter choice: ";
        cin >> userChoice;
        degree.MajorChoice(userChoice);
    }
    if (userChoice == 3) {
        cout << "3";
    }
    if (userChoice == 4) {
        cout << "Goodbye!";
    }

    cout << "\n";
    return 0;
}