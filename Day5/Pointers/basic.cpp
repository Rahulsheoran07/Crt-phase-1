#include <iostream>
using namespace std;
int main()
{
    int value = 100;
    int *ptr = &value;
    cout << "Value: " << *ptr << endl;
    cout << "Address: " << value << endl;
    *ptr = 200;
    cout << "Value: " << *ptr << endl;
    cout << "Value: " << value << endl;
    return 0;
}