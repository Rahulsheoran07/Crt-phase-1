#include <iostream>
using namespace std;
class Atm
{
private:
    int balance;

public:
    // Encapsulation is the process of hiding the internal details of an object and providing a public interface to interact with it. It allows us to protect the data from unauthorized access and modification, and it also helps to improve the maintainability and flexibility of the code.
    void setBalance(int b)
    {
        this->balance = b;
    }

    // Abstraction is the process of hiding the implementation details of an object and providing a simple interface to interact with it. It allows us to focus on what an object does rather than how it does it, and it also helps to improve the modularity and reusability of the code.
    void withdraw(int amount)
    {
        if (amount > balance)
        {
            cout << "Insufficient balance" << endl;
        }
        else
        {
            balance -= amount;
            cout << "Successfully withdrawn " << amount << endl;
        }
    }

    // getter function or Encapsulation
    int getBalance()
    {
        return balance;
    }
};

int main()
{
    Atm a;
    a.setBalance(10000);
    a.withdraw(1543);

    cout << "Balance is :" << a.getBalance() << endl;

    return 0;
}