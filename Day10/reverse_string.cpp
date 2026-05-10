#include <iostream>
using namespace std;
class String
{
public:
    void reverse_string(string str)
    {
        string rev = "";
        for (int i = str.length() - 1; i >= 0; i--)
        {
            rev += str[i];
        }
        cout << "Reversed string is: " << rev << endl;
    }
};
int main()
{
    string str;
    cout << "Enter a string: ";
    getline(cin, str);
    String s1;
    s1.reverse_string(str);
    return 0;
}