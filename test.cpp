#include <bits/stdc++.h>
using namespace std;
int uniqueMorseRepresentations(vector<string> &words)
{
    unordered_map<char, string> um;
    string morse[]{".-", "-...", "-.-.", "-..", ".", "..-.", "--.", "....", "..", ".---", "-.-", ".-..", "--", "-.", "---", ".--.", "--.-", ".-.", "...", "-", "..-", "...-", ".--", "-..-", "-.--", "--.."};
    for (auto s : morse)
    {
        char c = 'a';
        um[c] = s;
        c++;
    }
    set<string> mySet;
    for (auto word : words)
    {
        string s = "";
        for (auto c : word)
        {
            s += um[c];
        }
        mySet.insert(s);
    }
    return mySet.size();
}
int main() {
    vector<string> a {"gin", "zen", "gig", "msg"};
    cout << uniqueMorseRepresentations(a);
}