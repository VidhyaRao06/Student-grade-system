#ifndef GRADESYSTEM_H
#define GRADESYSTEM_H

#include <iostream>
#include <vector>
#include <string>
#include "Student.h"

using namespace std;

class GradeSystem
{
private:
    vector<Student> students;

public:
    // Constructor
    GradeSystem();

    // Student Operations
    void addStudent();
    void displayAllStudents() const;
    void searchStudent() const;
    void updateStudent();
    void deleteStudent();

    // Sorting
    void sortByName();
    void sortByPercentage();

    // File Handling
    void saveToFile(const string &filename);
    void loadFromFile(const string &filename);

    // Utility Functions
    bool isEmpty() const;
    int findStudentIndex(int id) const;
    int getStudentCount() const;

    // Menu
    void showMenu();
};

#endif