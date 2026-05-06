#include <iostream>
using namespace std;
class students
{
    // Access specifier
public:
    // Data members
    string name;
    int roll_no;
    // Member functions
    void show()
    {
        cout << "Name: " << name << endl;
        cout << "Roll No: " << roll_no << endl;
    }
};
int main()
{
    students s1;
    s1.name = "Rahul";
    s1.roll_no = 10;
    s1.show();

    return 0;
}