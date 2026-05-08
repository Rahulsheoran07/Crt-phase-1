#include <iostream>

using namespace std;
// Base Class or Parent class
class Player
{
public:
    string name;
    int runs;

    void setName(string n)
    {
        name = n;
    }
    void setRuns(int r)
    {
        runs = r;
    }
};
// Dervied Class or Child class
class Cricketer : public Player
{
public:
    string country;
    Cricketer(string s)
    {
        country = s;
    }
    void show()
    {
        cout << "Name: " << name << endl;
        cout << "Runs: " << runs << endl;
        cout << "Country: " << country << endl;
    }
};

int main()
{
    int runs;
    cin >> runs;
    Cricketer c1("India");
    c1.setName("Virat kohli");
    c1.setRuns(runs);
    c1.show();
    return 0;
}