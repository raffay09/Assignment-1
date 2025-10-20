#include<iostream>
using namespace std;

class student{
    string name;
    int age;
    int rollno;
    double cgpa;

    public:

    student(){
        name = "NOT KNOWN";
        age = 0;
        rollno = 0;
        cgpa = 0.0;
    }

    student(string name , int age , int rollno , double cgpa){
        this->name = name;
        this->age = age;
        this->rollno = rollno;
        this->cgpa = cgpa;
    }

    void setDetails(string name , int age , int rollno, double cgpa){
        this->name = name;
        this->age = age;
        this->rollno = rollno;
        this->cgpa = cgpa;
    }

    string getname(){
        return name;
    }
    int getage(){
        return age;
    }
    int getrollno(){
        return rollno;
    }
    double getcgpa(){
        return cgpa;
    }

    void showdetails(){
        cout << "Student name is: " << name;
        cout << "\nStudent age is: " << age;
        cout << "\nThe roll no is: " << rollno;
        cout << "\nThe cgpa is : " << cgpa;
        cout << "\nYour grade according to your cgpa is: ";
        if(cgpa >= 3.5 && cgpa < 4.0){
            cout << "A";
        }
        else if(cgpa >= 3.0 && cgpa < 3.5){
            cout << "B";
        }
        else if(cgpa >= 2.5 && cgpa < 3.0){
            cout << "C";
        }
        else if(cgpa >= 2.0 && cgpa < 2.5){
            cout << "D";
        }
        else if(cgpa < 2.0){
            cout << "F. Prob";
        }
    }

    ~student(){
        cout << "\nYour Program ended Successfully!!!";
    }
};

int main(){
        // default 
    student s1;
    s1.showdetails(); 
// parametrized constructor
    student s2("Raffay", 18, 14, 3.5);
    s2.showdetails();
    student s3;

    // setdetails
    s3.setDetails("Ali", 19, 22, 2.8);
    s3.showdetails();
    return 0;
}