#include <bits/stdc++.h>
using namespace std;
// void DFSUsingRecursive(int matrix[100][100], int start, int n, bool visited[], vector<int> result)
// {
//     for (int i = 0; i < n; i++)
//     {
//         if (matrix[start][i] == 1 && !visited[i])
//         {
//             visited[i] = true;
//             result.push_back(i);
//             DFSUsingRecursive(matrix, i, n, visited, result);
//         }
//     }
//     return;
// }
vector<int> DFSUsingStack(int matrix[100][100], int start, int n)
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
        if (found)
            continue;
        s.pop();
    }
    return res;
}
int main()
{
    int matrix[100][100];
    int start = 0;
    int size = 9;
    bool visited[100] = {false};
    vector<int> result;
    result.push_back(start);
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
        {
            cin >> matrix[i][j];
        }
    }
    vector<int> res = DFSUsingStack(matrix, start, size);
    cout << "result using stack: " << endl;
    for (int i = 0; i < res.size(); i++)
    {
        cout << res[i] << " ";
    }
    // DFSUsingRecursive(matrix, start, size, visited, result);
    // cout << "result using recursive: " << endl;
    // for (int i = 0; i < result.size(); i++)
    // {
    //     cout << result[i] << " ";
    // }
    return 0;
}
