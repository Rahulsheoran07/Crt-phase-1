#include <iostream>
#include <string>
using namespace std;

class Solution
{
public:
    string reverseWords(string s)
    {
        int n = s.size();
        int i = 0;
        string ans = "";

        while (i < n)
        {
            string temp = "";

            // Skip spaces
            while (i < n && s[i] == ' ')
                i++;

            // Extract word
            while (i < n && s[i] != ' ')
            {
                temp += s[i];
                i++;
            }

            // Add to answer in reverse order
            if (temp.size() > 0)
            {
                if (ans.size() > 0)
                    ans = temp + " " + ans;
                else
                    ans = temp;
            }
        }
        return ans;
    }
};

int main()
{
    Solution obj;
    string s;

    cout << "Enter a sentence: ";
    getline(cin, s);

    cout << "Reversed words: " << obj.reverseWords(s);

    return 0;
}