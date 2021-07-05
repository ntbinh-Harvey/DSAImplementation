// include space, case sensitive
#include <bits/stdc++.h>
using namespace std;
bool checkPalindromeIterative(string s)
{
    for (int i = 0; i < s.length() / 2; i++)
    {
        if (s[i] != s[s.length() - i - 1])
            return false;
    }
    return true;
}
bool checkPalindromeRecursive(string s, int start, int end)
{
    if (s.length() == 1)
        return true;
    if (s[start] != s[end])
        return false;
    if (start <= end)
        return checkPalindromeRecursive(s, start + 1, end - 1);
    return true;
}
int main()
{
    string s;
    cin >> s;
    cout << checkPalindromeIterative(s) << endl;
    cout << checkPalindromeRecursive(s, 0, s.length() - 1);
    return 0;
}