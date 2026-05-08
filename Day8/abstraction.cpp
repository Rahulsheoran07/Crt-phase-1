#include <iostream>
using namespace std;
class Atm
{
private:
    int balance;

public:
    Atm()
    {
        balance = 10000;
    }
    void withdraw(int amount)
    {
        if (amount > balance)
        {
            cout << "Insufficient balance" << endl;
        }
        else
        {
            balance -= amount;
            cout << "Withdrawn: " << amount << endl;
            cout << "Remaining balance: " << balance << endl;
        }
    }
    void showBalance()
    {
        cout << "Current balance: " << balance << endl;
    }
};
int main()
{
    Atm a;
    a.withdraw(2000);
    a.showBalance();
    return 0;
}