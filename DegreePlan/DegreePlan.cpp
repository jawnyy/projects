#include <iostream>
#include <string>
#include <fstream>
using namespace std;


int main() {
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