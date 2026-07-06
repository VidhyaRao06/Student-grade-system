#ifndef PERSON_H
#define PERSON_H

#include <iostream>
#include <string>

using namespace std;

// Base class
class Person
{
protected:
    int id;
    string name;
    int age;

public:
    // Default constructor
    Person();

    // Parameterized constructor
    Person(int id, string name, int age);

    // Destructor
    virtual ~Person();

    // Setters
    void setId(int id);
    void setName(string name);
    void setAge(int age);

    // Getters
    int getId() const;
    string getName() const;
    int getAge() const;

    // Display basic person information
    virtual void display() const;
};

#endif