#include <iostream>
#include<string>
#include <algorithm>
using namespace std;

string reverseWords(string s)
{
    int n = s.size();
    string ans = "";
    int i = n - 1;
    while (i >= 0 && s[i] == ' ')
        i--;
    while (i >= 0)
    {
        bool space = false;
        string temp = "";
        while (i >= 0 && s[i] != ' ')
        {
            temp += s[i];
            i--;
        }
        reverse(temp.begin(), temp.end());
        ans += temp;
        while (i >= 0 && s[i] == ' ')
        {
            space = true;
            i--;
        }
        if (space && i >= 0)
            ans += " ";
    }
    return ans;

    // this can be optimised in space , as if we can modify original array, then just reverse it and keep reversing each word later!
}

int main(){
    string s = "a good   example";
    cout << "Reversed String is : " << reverseWords(s);
}