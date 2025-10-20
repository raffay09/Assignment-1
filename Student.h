#include <iostream>
using namespace std;
// class creation
class student {
    string name;
    int age;
    int rollno;
    double cgpa;

public:
    student(); 
    student(string name, int age, int rollno, double cgpa);

    void setDetails(string name, int age, int rollno, double cgpa);

    string getname();
    int getage();
    int getrollno();
    double getcgpa();

    void showdetails();

    ~student();
};
