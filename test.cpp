#include <iostream>
#include <cassert>
#include "Student.h"
#include "Person.h"

using namespace std;

int main()
{
    cout << "========== UNIT TESTS ==========\n";

    // Test Case 1: Constructor
    float marks1[5] = {90, 85, 88, 92, 95};
    Student s1(101, "Rahul", 20, marks1);

    assert(s1.getId() == 101);
    assert(s1.getName() == "Rahul");
    assert(s1.getPercentage() == 90.0);
    assert(s1.getGrade() == 'A');

    cout << "Test Case 1 Passed\n";

    // Test Case 2: Grade Calculation
    float marks2[5] = {70, 72, 68, 75, 65};
    Student s2(102, "Priya", 19, marks2);

    assert(s2.getGrade() == 'C');

    cout << "Test Case 2 Passed\n";

    // Test Case 3: Low Marks
    float marks3[5] = {30, 40, 35, 45, 38};
    Student s3(103, "Amit", 21, marks3);

    assert(s3.getGrade() == 'F');

    cout << "Test Case 3 Passed\n";

    // Test Case 4: Setter Function
    float newMarks[5] = {80, 80, 80, 80, 80};

    s3.setMarks(newMarks);

    assert(s3.getPercentage() == 80.0);
    assert(s3.getGrade() == 'B');

    cout << "Test Case 4 Passed\n";

    cout << "\n=====================================\n";
    cout << "All Unit Tests Passed Successfully.\n";
    cout << "=====================================\n";

    return 0;
}