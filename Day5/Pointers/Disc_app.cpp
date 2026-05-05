#include <iostream>
using namespace std;
void disc(double &bill)
{
    bill = bill * 0.9;
}
int main()
{
    double bill = 250.60;
    cout << bill << endl;
    disc(bill);
    cout << bill;
    return 0;
}