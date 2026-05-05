/*
Problem 3: do-while Loop (1 to 10)
Write a C++ program that prints numbers from 1 to 10 using a do-while loop.
*/

#include <iostream>
using namespace std;

int main()
{
    int i = 1;
    do
    {
        cout << i << " ";
        i++;
    } while (i <= 10);
    return 0;
}