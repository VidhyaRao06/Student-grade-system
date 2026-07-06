6# Student Grade Management System

## Project Description

The Student Grade Management System is a menu-driven C++ application developed using Object-Oriented Programming (OOP). It allows users to manage student records, calculate grades, store data in files, and perform various operations such as searching, updating, deleting, and sorting student information.

---

## Features

- Add Student
- Display All Students
- Search Student by ID
- Update Student Details
- Delete Student Record
- Calculate Total Marks
- Calculate Percentage
- Assign Grade (A, B, C, D, F)
- Sort Students by Name
- Sort Students by Percentage
- Save Records to File
- Load Records from File
- Menu-Driven Interface
- Basic Unit Tests

---

## Technologies Used

- Programming Language: C++
- Standard: C++17
- Compiler: g++
- IDE: Visual Studio Code
- Operating System: Windows 11

---

## Project Structure

```
StudentGradeSystem/
│── Person.h
│── Person.cpp
│── Student.h
│── Student.cpp
│── GradeSystem.h
│── GradeSystem.cpp
│── main.cpp
│── test.cpp
│── Makefile
│── README.md
│── students.txt
```

---

## Build Instructions

### Compile Using g++

```bash
g++ -std=c++17 Person.cpp Student.cpp GradeSystem.cpp main.cpp -o StudentGradeSystem
```

### Run

Windows

```bash
StudentGradeSystem.exe
```

Linux/macOS

```bash
./StudentGradeSystem
```

---

## Build Using Makefile

Compile

```bash
make
```

Run

Windows

```bash
StudentGradeSystem.exe
```

Compile Unit Tests

```bash
make test
```

Clean Build Files

```bash
make clean
```

---

## Menu Options

1. Add Student
2. Display All Students
3. Search Student
4. Update Student
5. Delete Student
6. Sort by Name
7. Sort by Percentage
8. Save Records
9. Load Records
10. Student Count
0. Exit

---

## Sample Input

```
Student ID : 101
Student Name : Rahul
Age : 20

Marks
90
85
88
92
95
```

---

## Sample Output

```
Student ID : 101
Name : Rahul
Age : 20

Total : 450
Percentage : 90.00%
Grade : A
```

---

## Time Complexity

| Operation | Complexity |
|-----------|------------|
| Add Student | O(1) |
| Display Students | O(n) |
| Search Student | O(n) |
| Update Student | O(n) |
| Delete Student | O(n) |
| Sort by Name | O(n log n) |
| Sort by Percentage | O(n log n) |
| Save to File | O(n) |
| Load from File | O(n) |

---

## Basic Unit Tests

The project includes a `test.cpp` file that verifies:

- Student constructor
- Grade calculation
- Percentage calculation
- Setter functions

Run the tests using:

```bash
make test
```

---

## Author

Student Grade Management System

Developed in C++ using Object-Oriented Programming concepts for internship/project submission.