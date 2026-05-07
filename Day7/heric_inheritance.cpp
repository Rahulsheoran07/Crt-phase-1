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
    void setCountry(string s)
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

class Footballer : public Player
{
public:
    string club;
    int goals;
    void setClub(string c, int goals)
    {
        club = c;
        this->goals = goals;
    }

    void show()
    {
        cout << "Name: " << name << endl;

        cout << "Club: " << club << endl;
        cout << "Goals: " << goals << endl;
    }
};

int main()
{
    int runs;
    cin >> runs;
    Cricketer c1;
    c1.setCountry("India");
    c1.setName("Virat kohli");
    c1.setRuns(runs);
    c1.show();

    Footballer f1;
    f1.setName("Sunil Chhetri");
    f1.setClub("Bengluru fc", 85);
    f1.show();
    return 0;
}