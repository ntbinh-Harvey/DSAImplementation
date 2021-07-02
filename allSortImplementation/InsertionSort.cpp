// Time complexcity: bestCase: O(n) when the array is already sorted, avarageCase: O(n^2), worstCase: O(n^2) 
// when the array is reversed sorted(or acctually when the max at the top of the array and the min at the bottom of the array, no need to care about the middle part) 
// Space complexcity: O(1)
// STABLE
#include <bits/stdc++.h>
using namespace std;
void insertionSort(int a[], int n)
{
    for (int i = 1; i < n; i++)
    {
        int j = i - 1;
        while (a[i] < a[j] && j >= 0)
        {
            continue;
            j--;
        }
        if (j != i - 1)
            swap(a[i], a[j + 1]);
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
    insertionSort(a, n);
    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }
    // cout << n;
    return 0;
}