#include <bits/stdc++.h>
using namespace std;
vector<int> DFS(int matrix[100][100], int start, int n)
{
    vector<int> res;
    stack<int> s;
    bool visited[100] = {false};
    // init
    s.push(start);
    visited[start] = true;
    res.push_back(start);
    // start DFS
    while (!s.empty())
    {
        int index = s.top();
        bool found = false;
        for (int i = 0; i < n; i++)
        {
            if (matrix[index][i] == 1 && !visited[i])
            {
                s.push(i);
                res.push_back(i);
                visited[i] = true;
                found = true;
                break;
            }
        }
        if(found) continue;
        s.pop();
    }
    return res;
}
int main()
{
    int matrix[100][100];
    int start = 0;
    int size = 9;
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
        {
            cin >> matrix[i][j];
        }
    }
    vector<int> res = DFS(matrix, start, size);
    for (int i = 0; i < res.size(); i++)
    {
        cout << res[i] << " ";
    }
    return 0;
}
