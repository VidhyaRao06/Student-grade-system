#include "GradeSystem.h"
#include <iostream>

using namespace std;

// Constructor
GradeSystem::GradeSystem()
{
    students.clear();
}

// Display Main Menu
void GradeSystem::showMenu()
{
    cout << "\n========================================";
    cout << "\n      STUDENT GRADE MANAGEMENT SYSTEM";
    cout << "\n========================================";
    cout << "\n1. Add Student";
    cout << "\n2. Display All Students";
    cout << "\n3. Search Student";
    cout << "\n4. Update Student";
    cout << "\n5. Delete Student";
    cout << "\n6. Sort By Name";
    cout << "\n7. Sort By Percentage";
    cout << "\n8. Save Records";
    cout << "\n9. Load Records";
    cout << "\n10. Student Count";
    cout << "\n0. Exit";
    cout << "\n========================================";
    cout << "\nEnter your choice: ";
}

// Check whether vector is empty
bool GradeSystem::isEmpty() const
{
    return students.empty();
}

// Return total number of students
int GradeSystem::getStudentCount() const
{
    return students.size();
}

// Add Student
void GradeSystem::addStudent()
{
    Student s;

    cout << "\nEnter Student Details";
    cout << "\n----------------------";

    s.input();

    students.push_back(s);

    cout << "\nStudent added successfully.\n";
}

// Display All Students
void GradeSystem::displayAllStudents() const
{
    if (students.empty())
    {
        cout << "\nNo student records found.\n";
        return;
    }

    cout << "\n========================================";
    cout << "\n        STUDENT RECORDS";
    cout << "\n========================================";

    for (size_t i = 0; i < students.size(); i++)
    {
        cout << "\nStudent " << i + 1 << endl;
        students[i].display();
    }

    cout << "\nTotal Students : " << students.size() << endl;
}


#include "GradeSystem.h"
#include <iostream>

using namespace std;

// Find Student by ID
int GradeSystem::findStudentIndex(int id) const
{
    for (int i = 0; i < students.size(); i++)
    {
        if (students[i].getId() == id)
        {
            return i;
        }
    }

    return -1;
}

// Search Student
void GradeSystem::searchStudent() const
{
    if (students.empty())
    {
        cout << "\nNo student records available.\n";
        return;
    }

    int id;

    cout << "\nEnter Student ID to search: ";
    cin >> id;

    int index = findStudentIndex(id);

    if (index == -1)
    {
        cout << "\nStudent not found.\n";
    }
    else
    {
        cout << "\nStudent Found\n";
        students[index].display();
    }
}

// Update Student
void GradeSystem::updateStudent()
{
    if (students.empty())
    {
        cout << "\nNo student records available.\n";
        return;
    }

    int id;

    cout << "\nEnter Student ID to update: ";
    cin >> id;

    int index = findStudentIndex(id);

    if (index == -1)
    {
        cout << "\nStudent not found.\n";
        return;
    }

    cout << "\nEnter New Details\n";

    students[index].input();

    cout << "\nStudent record updated successfully.\n";
}

// Delete Student
void GradeSystem::deleteStudent()
{
    if (students.empty())
    {
        cout << "\nNo student records available.\n";
        return;
    }

    int id;

    cout << "\nEnter Student ID to delete: ";
    cin >> id;

    int index = findStudentIndex(id);

    if (index == -1)
    {
        cout << "\nStudent not found.\n";
        return;
    }

    students.erase(students.begin() + index);

    cout << "\nStudent record deleted successfully.\n";
}

#include <algorithm>
#include <fstream>

// Sort Students by Name
void GradeSystem::sortByName()
{
    if (students.empty())
    {
        cout << "\nNo student records available.\n";
        return;
    }

    sort(students.begin(), students.end(),
         [](const Student &a, const Student &b)
         {
             return a.getName() < b.getName();
         });

    cout << "\nStudents sorted by name successfully.\n";
}

// Sort Students by Percentage
void GradeSystem::sortByPercentage()
{
    if (students.empty())
    {
        cout << "\nNo student records available.\n";
        return;
    }

    sort(students.begin(), students.end(),
         [](const Student &a, const Student &b)
         {
             return a.getPercentage() > b.getPercentage();
         });

    cout << "\nStudents sorted by percentage successfully.\n";
}

// Save Records to File
void GradeSystem::saveToFile(const string &filename)
{
    ofstream out(filename);

    if (!out)
    {
        cout << "\nError opening file.\n";
        return;
    }

    out << students.size() << endl;

    for (Student &student : students)
    {
        student.saveToFile(out);
    }

    out.close();

    cout << "\nRecords saved successfully.\n";
}

// Load Records from File
void GradeSystem::loadFromFile(const string &filename)
{
    ifstream in(filename);

    if (!in)
    {
        cout << "\nFile not found.\n";
        return;
    }

    students.clear();

    int count;
    in >> count;
    in.ignore();

    for (int i = 0; i < count; i++)
    {
        Student student;
        student.readFromFile(in);
        students.push_back(student);
    }

    in.close();

    cout << "\nRecords loaded successfully.\n";
}