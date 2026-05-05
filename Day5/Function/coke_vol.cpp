#include <iostream>
using namespace std;

// Function to calculate total volume
int totalVolume(int bottles)
{
    return bottles * 250; // each bottle = 250 ml
}

int main()
{
    int n;
    cout << "Enter number of bottles: ";
    cin >> n;

    int result = totalVolume(n);

    cout << "Total volume = " << result << " ml";

    return 0;
}