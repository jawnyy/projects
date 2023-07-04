#include <iostream>
#include <string>
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
        cout << "2";
    }
    if (userChoice == 3) {
        cout << "3";
    }
    if (userChoice == 4) {
        cout << "4";
    }

    cout << "\n";
    return 0;
}