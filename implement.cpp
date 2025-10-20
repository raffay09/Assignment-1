#include "Student.h"
// default constructor
student::student() {
    name = "NOT KNOWN";
    age = 0;
    rollno = 0;
    cgpa = 0.0;
}
//parameterized constructor
student::student(string name, int age, int rollno, double cgpa) {
    this->name = name;
    this->age = age;
    this->rollno = rollno;
    this->cgpa = cgpa;
}

//setter
void student::setDetails(string name, int age, int rollno, double cgpa) {
    this->name = name;
    this->age = age;
    this->rollno = rollno;
    this->cgpa = cgpa;
}
//getter
string student::getname() {
     return name; 
    }
int student::getage() {
     return age;
     }
int student::getrollno() {
     return rollno;
     }
double student::getcgpa() {
     return cgpa;
     }
//Showing details of student
void student::showdetails() {
    cout << "Student name is: " << name;
    cout << "\nStudent age is: " << age;
    cout << "\nThe roll no is: " << rollno;
    cout << "\nThe cgpa is : " << cgpa;
    cout << "\nYour grade according to your cgpa is: ";

    if (cgpa >= 3.5 && cgpa < 4.0)
        cout << "A";
    else if (cgpa >= 3.0)
        cout << "B";
    else if (cgpa >= 2.5)
        cout << "C";
    else if (cgpa >= 2.0)
        cout << "D";
    else
        cout << "F. Prob";
}
//destructor
student::~student() {
    cout << "\nYour Program ended Successfully!!!";
}