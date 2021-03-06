/* C++ program to create an object of a class 
and access class attributes */

#include <iostream>
#include <string>
using namespace std;

// class definition
// "student" is a class
class Student {
public: // Access specifier
    int rollNo; // Attribute (integer variable)
    string stdName; // Attribute (string variable)
    float ptr; // Attribute (float variable)
};

int main()
{
    // object creation
    Student std;

    // Accessing attributes and setting the values
    std.rollNo = 14;
    std.stdName = "Chandan Gupta";
    std.ptr = 7.63;

    // Printing the values
    cout << "Student's Roll No.: " << std.rollNo << "\n";
    cout << "Student's Name: " << std.stdName << "\n";
    cout << "Student's Pointer: " << std.ptr << "\n";

    return 0;
}