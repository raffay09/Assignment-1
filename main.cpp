#include "Student.h"
int main() {

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
