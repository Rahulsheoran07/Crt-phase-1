#include <iostream>
using namespace std;
class cricketers
{
public:
    string name;
    int runs;
    // Parameterized constructor
    cricketers(string n, int runs)
    {
        name = n;
        this->runs = runs;
    }
    // Copy constructor
    cricketers(cricketers &c)
    {
        name = c.name;
        runs = c.runs;
    }
    void show()
    {
        cout << "Name: " << name << endl;
        cout << "Runs: " << runs << endl;
    }
};
int main()
{
    cricketers c1("Virat", 12000);
    cricketers c2 = c1; // Copy constructor is called
    c2.show();
    return 0;
}