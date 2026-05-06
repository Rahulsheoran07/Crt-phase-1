#include <iostream>
using namespace std;

class students
{
public:
    int roll_no;
    string name;
    // Default constructor
    students()
    {
        roll_no = 0;
        name = "Your Name Please";
    }
    // Parameterized constructor

    students(int r, string name)
    {
        roll_no = r;
        this->name = name;
    }
    void show()
    {
        cout << "Name: " << name << endl;
        cout << "Roll No: " << roll_no << endl;
    }
};

int main()
{

    // s1 objects calling default constructor
    students s1;
    s1.show();

    // s2 objects calling parameterized constructor
    students s2(18, "Rahul");
    s2.show();
    return 0;
}