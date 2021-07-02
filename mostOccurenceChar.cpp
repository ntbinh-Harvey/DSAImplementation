#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin >> s;
    unordered_map<char, int> um;
    int max = INT_MIN;
    char res;
    for (char c : s)
    {
        um[c]++;
    }
    for (auto itr : um)
    {
        if (max < itr.second)
        {
            max = itr.second;
            res = itr.first;
        }
    }
    cout << res << endl;
    return 0;
}