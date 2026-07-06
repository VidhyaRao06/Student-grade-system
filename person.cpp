#include "Person.h"

using namespace std;

// Default Constructor
Person::Person()
{
    id = 0;
    name = "";
    age = 0;
}

// Parameterized Constructor
Person::Person(int id, string name, int age)
{
    this->id = id;
    this->name = name;
    this->age = age;
}

// Destructor
Person::~Person()
{
    // No dynamic memory used
}

// Setters
void Person::setId(int id)
{
    this->id = id;
}

void Person::setName(string name)
{
    this->name = name;
}

void Person::setAge(int age)
{
    this->age = age;
}

// Getters
int Person::getId() const
{
    return id;
}

string Person::getName() const
{
    return name;
}

int Person::getAge() const
{
    return age;
}

// Display Person Details
void Person::display() const
{
    cout << "ID   : " << id << endl;
    cout << "Name : " << name << endl;
    cout << "Age  : " << age << endl;
}