#include <iostream>
using namespace std;
class students
{
public:
    string name;
    int roll_no;
    // Default constructor
    students()
    {
        name = "Your name please";
        roll_no = 20;
    }
    void show()
    {
        cout << "Name: " << name << endl;
        cout << "Roll No: " << roll_no << endl;
    }
};
int main()
{
    students s1;
    s1.show();
    return 0;
}