#ifndef STUDENT_H
#define STUDENT_H

#include <iostream>
#include <string>
#include "Person.h"
using namespace std;
class Student : public Person
{
private:
    float marks[5];
    float total;
    float percentage;
    char grade;

public:

    int getId() const;
    string getName() const;
    // Constructors
    Student();
    Student(int id, string name, int age, float m[]);

    // Input student details
    void input();

    // Calculate total, percentage and grade
    void calculateResult();

    // Display student details
    void display() const override;

    // Setters
    void setMarks(float m[]);

    // Getters
    float getTotal() const;
    float getPercentage() const;
    char getGrade() const;

    // File handling
    void saveToFile(std::ofstream &out)const;
    void readFromFile(ifstream &in);
};

#endif