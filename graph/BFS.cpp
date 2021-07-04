#include <bits/stdc++.h>
using namespace std;
vector<int> BFS(int matrix[100][100], int start, int n)
{
    vector<int> res;
    queue<int> q;
    bool visited[100] = {false};
    // init
    q.push(start);
    visited[start] = true;
    res.push_back(start);
    // start BFS
    while (!q.empty())
    {
        int index = q.front();
        for (int i = 0; i < n; i++)
        {
            if (matrix[index][i] == 1 && !visited[i])
            {
                q.push(i);
                res.push_back(i);
                visited[i] = true;
            }
        }
        q.pop();
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
    vector<int> res = BFS(matrix, start, size);
    for (int i = 0; i < res.size(); i++)
    {
        cout << res[i] << " ";
    }
    return 0;
}
