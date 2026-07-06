#include <iostream>
#include "GradeSystem.h"

using namespace std;

int main()
{
    GradeSystem system;

    int choice;

    do
    {
        system.showMenu();
        cin >> choice;

        switch (choice)
        {
        case 1:
            system.addStudent();
            break;

        case 2:
            system.displayAllStudents();
            break;

        case 3:
            system.searchStudent();
            break;

        case 4:
            system.updateStudent();
            break;

        case 5:
            system.deleteStudent();
            break;

        case 6:
            system.sortByName();
            cout << "\nStudents sorted by name successfully.\n";
            break;

        case 7:
            system.sortByPercentage();
            cout << "\nStudents sorted by percentage successfully.\n";
            break;

        case 8:
            system.saveToFile("students.txt");
            break;

        case 9:
            system.loadFromFile("students.txt");
            break;

        case 10:
            cout << "\nTotal Students = "
                 << system.getStudentCount()
                 << endl;
            break;

        case 0:
            cout << "\n====================================";
            cout << "\nThank You!";
            cout << "\nExiting Student Grade Management System...";
            cout << "\n====================================\n";
            break;

        default:
            cout << "\nInvalid Choice! Please try again.\n";
        }

    } while (choice != 0);

    return 0;
}