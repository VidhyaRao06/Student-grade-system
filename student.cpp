#include "Student.h"
#include <iomanip>

using namespace std;



// Default Constructor
Student::Student()
{
    total = 0;
    percentage = 0;
    grade = 'F';

    for (int i = 0; i < 5; i++)
    {
        marks[i] = 0;
    }
}

// Parameterized Constructor
Student::Student(int id, string name, int age, float m[])
    : Person(id, name, age)
{
    for (int i = 0; i < 5; i++)
    {
        marks[i] = m[i];
    }

    calculateResult();
}

// Input Student Details
void Student::input()
{
    cout << "\nEnter Student ID : ";
    cin >> id;

    cin.ignore();

    cout << "Enter Student Name : ";
    getline(cin, name);

    cout << "Enter Age : ";
    cin >> age;

    cout << "\nEnter Marks of 5 Subjects\n";

    for (int i = 0; i < 5; i++)
    {
        cout << "Subject " << i + 1 << " : ";
        cin >> marks[i];
    }

    calculateResult();
}

// Calculate Total, Percentage and Grade
void Student::calculateResult()
{
    total = 0;

    for (int i = 0; i < 5; i++)
    {
        total += marks[i];
    }

    percentage = total / 5.0;

    if (percentage >= 90)
        grade = 'A';
    else if (percentage >= 80)
        grade = 'B';
    else if (percentage >= 70)
        grade = 'C';
    else if (percentage >= 60)
        grade = 'D';
    else
        grade = 'F';
}

// Display Student Details
void Student::display() const
{
    cout << "\n--------------------------------------";
    cout << "\nStudent ID : " << id;
    cout << "\nName       : " << name;
    cout << "\nAge        : " << age;

    cout << "\nMarks      : ";

    for (int i = 0; i < 5; i++)
    {
        cout << marks[i] << " ";
    }

    cout << "\nTotal      : " << total;
    cout << "\nPercentage : "
         << fixed << setprecision(2)
         << percentage << "%";

    cout << "\nGrade      : " << grade;
    cout << "\n--------------------------------------\n";
}

// Set Marks
void Student::setMarks(float m[])
{
    for (int i = 0; i < 5; i++)
    {
        marks[i] = m[i];
    }

    calculateResult();
}

// Get Total
float Student::getTotal() const
{
    return total;
}

// Get Percentage
float Student::getPercentage() const
{
    return percentage;
}

// Get Grade
char Student::getGrade() const
{
    return grade;
}

int Student::getId() const
{
    return id;
}

string Student::getName() const
{
    return name;
}

// Save Student Data to File
void Student::saveToFile(std::ofstream &out)const
{
    cout << id << endl;
    cout << name << endl;
    cout << age << endl;

    for (int i = 0; i < 5; i++)
    {
        cout << marks[i] << " ";
    }

    cout << endl;
}

// Read Student Data from File
void Student::readFromFile(ifstream &in)
{
    cin >> id;
    cin.ignore();

    getline(cin, name);

    cin >> age;

    for (int i = 0; i < 5; i++)
    {
        cin >> marks[i];
    }

    calculateResult();
}