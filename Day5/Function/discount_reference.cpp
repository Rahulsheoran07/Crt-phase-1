#include <iostream>
using namespace std;

void applyDiscount(double &billAmount)
{
    const double discountRate = 0.10; // 10%
    billAmount -= billAmount * discountRate;
}

int main()
{
    double billAmount;
    cout << "Enter original bill amount: ";
    cin >> billAmount;

    applyDiscount(billAmount);

    cout << "Bill amount after 10% discount: " << billAmount << endl;
    return 0;
}
