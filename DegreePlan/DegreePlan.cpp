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
            cout << "Classes for Computer Science:\n";
            cout << "COSC 1436 | Programming Fundamentals I\n";
            cout << "PHYS 2325 | University Physics I\n";
            cout << "MATH 2414 | Calculus II\n";
            cout << "COSC 2436 | Programming Fundamentals III\n";
            cout << "MATH 2318 | Linear Algebra\n";
        }
        else if (choice == 2) {
            cout << "\n";
            cout << "Classes for Engineering:\n";
            cout << "ENGR 1301 | Introduction to Engineering\n";
            cout << "MATH 2415 | Calculus III\n";
            cout << "ENGR 2304 | Programming for Engineers\n";
            cout << "PHYS 2326 | University Physics II\n";
            cout << "ENGL 1302 | Composition II\n";
        }
        else if (choice == 3) {
            cout << "\n";
            cout << "Classes for Mathematics:\n";
            cout << "MATH 2414 | Calculus I\n";
            cout << "MATH 1342 | Elementary Statistical Methods\n";
            cout << "CHEM 1311 | General Chemistry I\n";
            cout << "DRAM 2366 | Film Appreciation\n";
            cout << "MATH 2310 | Differential Equations\n";
        }
        else if (choice == 4) {
            cout << "\n";
            cout << "Classes for Criminal Justice:\n";
            cout << "CRIJ 1301 | Introduction to Criminal Justice\n";
            cout << "CRIJ 1310 | Fundamentals of Criminal Law\n";
            cout << "CRIJ 2314 | Criminal Investigation\n";
            cout << "ENGL 1301 | Composition I\n";
            cout << "SPCH 1315 | Public Speaking\n";
        }
        else if (choice == 5) {
            cout << "\n";
            cout << "Classes for Business:\n";
            cout << "BUSI 1301 | Business Principles\n";
            cout << "ECON 2301 | Principles of Macroeconomics\n";
            cout << "ECON 2302 | Principles of Microeconomics\n";
            cout << "PHIL 1301 | Introduction to Philosophy\n";
            cout << "MATH 1314 | College Algebra\n";
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
    int dChoice;

    system("clear");
    cout << "\n";
    cout << "Menu:\n";
    cout << "Student Information - 1\n";
    cout << "Major Degree - 2\n";
    cout << "Courses - 3\n";
    cout << "Quit - 4\n";
    cout << "Choose an option: ";
    int userChoice;
    cin >> userChoice;
    system("clear");

    if (userChoice == 1){
        cout << "1";
    }
    if (userChoice == 2) {
        cout << "\n";
        cout << "Computer Science - 1\n";
        cout << "Engineering - 2\n";
        cout << "Mathematics - 3\n";
        cout << "Criminal Justice - 4\n";
        cout << "Business - 5\n";
        cout << "Enter choice: ";
        cin >> dChoice;
        system("clear");
        degree.MajorChoice(dChoice);
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