#include <iostream>
using namespace std;
class Student
{
public:
    static int reg_no; // Static member variable
    Student()
    {
        reg_no++;
    }
    static void showRegNo()
    {
        cout << "Registration number: " << reg_no << endl;
    }
};
int Student ::reg_no = 100;
int main()
{
    Student s1;
    Student s2;
    Student s3;
    Student ::showRegNo();
    Student s4;
    Student ::showRegNo();
    return 0;
}