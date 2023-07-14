#include <iostream>
#include <string>
#include <fstream>
#include <cstdlib>
using namespace std;

class Degree {
    public:
    void MajorChoice(int choice) {
        if (choice == 1) {
            cout << "Classes for Computer Science:\n";
            cout << "COSC 1436 | Programming Fundamentals I\n";
            cout << "PHYS 2325 | University Physics I\n";
            cout << "MATH 2414 | Calculus II\n";
            cout << "COSC 2436 | Programming Fundamentals III\n";
            cout << "MATH 2318 | Linear Algebra\n";
        }
        else if (choice == 2) {
            cout << "Classes for Engineering:\n";
            cout << "ENGR 1301 | Introduction to Engineering\n";
            cout << "MATH 2415 | Calculus III\n";
            cout << "ENGR 2304 | Programming for Engineers\n";
            cout << "PHYS 2326 | University Physics II\n";
            cout << "ENGL 1302 | Composition II\n";
        }
        else if (choice == 3) {
            cout << "Classes for Mathematics:\n";
            cout << "MATH 2414 | Calculus I\n";
            cout << "MATH 1342 | Elementary Statistical Methods\n";
            cout << "CHEM 1311 | General Chemistry I\n";
            cout << "DRAM 2366 | Film Appreciation\n";
            cout << "MATH 2310 | Differential Equations\n";
        }
        else if (choice == 4) {
            cout << "Classes for Criminal Justice:\n";
            cout << "CRIJ 1301 | Introduction to Criminal Justice\n";
            cout << "CRIJ 1310 | Fundamentals of Criminal Law\n";
            cout << "CRIJ 2314 | Criminal Investigation\n";
            cout << "ENGL 1301 | Composition I\n";
            cout << "SPCH 1315 | Public Speaking\n";
        }
        else if (choice == 5) {
            cout << "Classes for Business:\n";
            cout << "BUSI 1301 | Business Principles\n";
            cout << "ECON 2301 | Principles of Macroeconomics\n";
            cout << "ECON 2302 | Principles of Microeconomics\n";
            cout << "PHIL 1301 | Introduction to Philosophy\n";
            cout << "MATH 1314 | College Algebra\n";
        }
    }
};

class Schedule {
    public:
    void classSchedule(int sChoice) {
        if (sChoice == 1) {
            cout << "COSC 1436 -> Programming Fundamentals I (MW from 10:00 am - 11:50 am)\n";
            cout << "COSC 1436 -> Programming Fundamentals I (TR from 8:00 am - 9:50 am)\n";
            cout << "PHYS 2325 -> University Physics I (MW from 11:30 am - 1:00 pm)\n";
            cout << "PHYS 2325 -> University Physics I (TR from 8:00 am - 9:30 am)\n";
            cout << "MATH 2414 -> Calculus II (MW from 1:00 pm - 2:50 pm)\n";
            cout << "MATH 2414 -> Calculus II (TR from 12:00 pm - 1:50 pm)\n";
            cout << "COSC 2436 -> Programming Fundamentals III (MW from 10:00 am - 11:50 am)\n";
            cout << "COSC 2436 -> Programming Fundamentals III (TR from 1:00 pm - 2:50 pm)\n";
            cout << "MATH 2318 -> Linear Algebra (MW from 11:10 am - 1:00 pm)\n";
            cout << "MATH 2318 -> Linear Algebra (TR from 10:10 am - 12:00 pm)\n";
        }
        if (sChoice == 2) {
            cout << "ENGR 1301 -> Introduction to Engineering (MW from 11:10 am - 1:00 pm)\n";
            cout << "ENGR 1301 -> Introduction to Engineering (TR from 12:00 pm - 1:50 pm)\n";
            cout << "MATH 2415 -> Calculus III(MW from 11:30 am - 1:00 pm)\n";
            cout << "MATH 2415 -> Calculus III (TR from 1:00 pm - 2:50 pm)\n";
            cout << "ENGR 2304 -> Programming for Engineers (MW from 11:30 am - 1:00 pm)\n";
            cout << "ENGR 2304 -> Programming for Engineers (TR from 8:00 am - 9:50 am)\n";
            cout << "PHYS 2326 -> University Physics II(MW from 11:30 am - 1:00 pm)\n";
            cout << "PHYS 2326 -> University Physics II (TR from 1:00 pm - 2:50 pm)\n";
            cout << "ENGL 1302 -> Composition II (MW from 11:10 am - 1:00 pm)\n";
            cout << "ENGL 1302 -> Composition II (TR from 12:00 pm - 1:50 pm)\n";
        }
        if (sChoice == 3) {
            cout << "MATH 2414 -> Calculus I (MW from 1:00 pm - 2:50 pm)\n";
            cout << "MATH 2414 -> Calculus I (TR from 8:00 am - 9:30 am)\n";
            cout << "MATH 1342 -> Elementary Statistical Methods (MW from 11:30 am - 1:00 pm)\n";
            cout << "MATH 1342 -> Elementary Statistical Methods (TR from 12:00 pm - 1:50 pm)\n";
            cout << "CHEM 1311 -> General Chemistry I (MW from 10:00 am - 11:50 am)\n";
            cout << "CHEM 1311 -> General Chemistry I (TR from 12:00 pm - 1:50 pm)\n";
            cout << "DRAM 2366 -> Film Appreciation (MW from 1:00 pm - 2:50 pm)\n";
            cout << "DRAM 2366 -> Film Appreciation (TR from 8:00 am - 9:30 am)\n";
            cout << "MATH 2310 -> Differential Equations (MW from 10:00 am - 11:50 am)\n";
            cout << "MATH 2310 -> Differential Equations (TR from 1:00 pm - 2:50 pm)\n";
        }
        if (sChoice == 4) {
            cout << "CRIJ 1301 -> Introduction to Criminal Justice (MW from 10:00 am - 11:50 am)\n";
            cout << "CRIJ 1301 -> Introduction to Criminal Justice (TR from 10:10 am - 12:00 pm)\n";
            cout << "CRIJ 1310 -> Fundamentals of Criminal Law (MW from 1:00 pm - 2:50 pm)\n";
            cout << "CRIJ 1310 -> Fundamentals of Criminal Law (TR from 1:00 pm - 2:50 pm)\n";
            cout << "CRIJ 2314 -> Criminal Investigation (MW from 10:00 am - 11:50 am)\n";
            cout << "CRIJ 2314 -> Criminal Investigation (TR from 1:00 pm - 2:50 pm)\n";
            cout << "ENGL 1301 -> Composition I (MW from 11:30 am - 1:00 pm)\n";
            cout << "ENGL 1301 -> Composition I (TR from 8:00 am - 9:30 am)\n";
            cout << "SPCH 1315 -> Public Speaking (MW from 1:00 pm - 2:50 pm)\n";
            cout << "SPCH 1315 -> Public Speaking (TR from 10:10 am - 12:00 pm)\n";
        }
        if (sChoice == 5) {
            cout << "BUSI 1301 -> Business Principles (MW from 10:00 am - 11:50 am)\n";
            cout << "BUSI 1301 -> Business Principles (TR from 1:00 pm - 2:50 pm)\n";
            cout << "ECON 2301 -> Principles of Macroeconomics (MW from 11:00 am - 12:50 am)\n";
            cout << "ECON 2301 -> Principles of Macroeconomics (TR from 10:10 am - 12:00 pm)\n";
            cout << "ECON 2302 -> Principles of Microeconomics (MW from 1:00 am - 2:50 am)\n";
            cout << "ECON 2302 -> Principles of Microeconomics (TR from 10:10 am - 12:00 pm)\n";
            cout << "PHIL 1301 -> Introduction to Philosophy (MW from 10:00 am - 11:50 am)\n";
            cout << "PHIL 1301 -> Introduction to Philosophy (TR from 1:00 pm - 2:50 pm)\n";
            cout << "MATH 1314 -> College Algebra (MW from 8:00 am - 9:30 am)\n";
            cout << "MATH 1314 -> College Algebra (TR from 8:00 am - 9:30 am)\n";
        }
        
    }
};

class Student {
    public:
    fstream stuFile;
    void enterStudents() {
        stuFile.open("StudentInfo.txt", ios::app);
        if (stuFile.is_open()) {
            cout << "Enter information in this format: FirstName LastName, major\n";
            string info;
            getline(cin, info);
            stuFile << info;
            stuFile.close();
        }
    }
    void displayStudents() {
        stuFile.open("StudentInfo.txt", ios::in);
        if (stuFile.is_open()) {
            string line;
            while(getline(stuFile, line)) {
                cout << line << endl;
            }
            stuFile.close();
        }
    }
};


int main() {
    Degree degree;
    Student student;
    Schedule schedule;
    int dChoice;
    int cSchedule;

    system("clear");
    cout << "Menu:\n";
    cout << "Student Information - 1\n";
    cout << "Major Degree - 2\n";
    cout << "Course Schedule - 3\n";
    cout << "Quit - 4\n";
    cout << "Choose an option: ";
    int userChoice;
    cin >> userChoice;
    system("clear");

    if (userChoice == 1) {
        cout << "Enter student information - 1\n";
        cout << "View student information - 2\n";
        cout << "Enter 1 or 2: ";
        int stuChoice;
        cin >> stuChoice;
        system("clear");
        if (stuChoice == 1) {
            student.enterStudents();
        }
        else {
            student.displayStudents();
        }
    }
    if (userChoice == 2) {
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
        cout << "Computer Science - 1\n";
        cout << "Engineering - 2\n";
        cout << "Mathematics - 3\n";
        cout << "Criminal Justice - 4\n";
        cout << "Business - 5\n";
        cout << "Select major to view semester schedule for: ";
        cin >> cSchedule;
        system("clear");
        schedule.classSchedule(cSchedule);
    }
    if (userChoice == 4) {
        cout << "Goodbye!\n";
    }

    cout << "\n";
    return 0;
}