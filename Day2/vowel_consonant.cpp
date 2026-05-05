/*
Problem 12: Vowel or Consonant
Write a C++ program that checks whether input character is vowel, consonant, or invalid.
*/

#include <iostream>
using namespace std;

int main()
{
    char ch;
    cin >> ch;

    switch (ch)
    {
    case 'a':
    case 'e':
    case 'i':
    case 'o':
    case 'u':
    case 'A':
    case 'E':
    case 'I':
    case 'O':
    case 'U':
        cout << "Vowel";
        break;
    default:
        if ((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z'))
            cout << "Consonant";
        else
            cout << "Invalid input";
    }

    return 0;
}