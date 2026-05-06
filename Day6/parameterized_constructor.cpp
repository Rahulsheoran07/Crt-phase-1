#include <iostream>
using namespace std;
class students
{
public:
    string name;
    int roll_no;
    // Parameterized constructor
    students(string n, int roll)
    {
        name = n;
        roll_no = roll;
    }
    void show()
    {
        cout << "Name: " << name << endl;
        cout << "Roll No: " << roll_no << endl;
    }
};
int main()
{
    students s1("Rahul", 10);
    s1.show();
    return 0;
}