#include <iostream>
using namespace std;

int main()
{
    string str1 = "Hello;"; // fixed missing semicolon
    string str2 = "JECRC";

    cout << str1 << endl;
    cout << str2 << endl;

    // Length of string
    int n = str1.length();
    cout << "Length of str1 is: " << n << endl;

    // Append string
    cout << "After appending str2 to str1: " << str1 + str2 << endl;

    // Empty string
    cout << "Is str1 empty? " << str1.empty() << endl;

    // Concatenate string
    str1 += str2;
    cout << "After concatenating str2 to str1: " << str1 << endl;

    // find()
    int index = str1.find("JECRC");
    cout << "Index of 'JECRC' in str1: " << index << endl;

    // at() method
    cout << "Character at index 1 in str1: " << str1.at(1) << endl;

    // swap string
    str1.swap(str2);
    cout << "After swapping str1 and str2: " << endl;
    cout << "str1: " << str1 << endl;
    cout << "str2: " << str2 << endl;

    // substring
    string substr = str1.substr(0, 5);
    cout << "Substring of str1 from index 0 to 4: " << substr << endl;

    // getline
    string str3;
    getline(cin, str3);
    cout << "You entered: " << str3 << endl;

    return 0;
}