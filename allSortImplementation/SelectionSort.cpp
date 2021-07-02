// Time complexcity: bestCase: O(n^2), avarageCase: O(n^2), worstCase: O(n^2)
// Space complexcity: O(1)
// UNSTABLE
#include <bits/stdc++.h>
using namespace std;
void selectionSort(int a[], int n)
{
    for (int i = 0; i < n; i++)
    {
        int minIndex = i;
        int min = a[i];
        for (int j = i + 1; j < n; j++)
        {
            if (min > a[j])
            {
                min = a[j];
                minIndex = j;
            }
        }
        if (minIndex != i)
            swap(a[i], a[minIndex]);
    }
}
int main()
{
    int n;
    cin >> n;
    int a[500];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    selectionSort(a, n);
    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }
    return 0;
}