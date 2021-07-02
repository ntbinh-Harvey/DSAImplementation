// Time complexcity: bestCase: O(n) when the array is already sorted, avarageCase: O(n^2), worstCase: O(n^2) 
// when the array is reversed sorted(or acctually when the max at the top of the array and the min at the bottom of the array, no need to care about the middle part) 
// Space complexcity: O(1)
// STABLE
#include <bits/stdc++.h>
using namespace std;
void bubbleSort(int a[], int n)
{
    bool isSwap;
    while (isSwap)
    {
        isSwap = false;
        for (int i = 0; i < n - 1; i++)
        {
            if (a[i] > a[i + 1])
            {
                swap(a[i], a[i + 1]);
                isSwap = true;
            }
        }
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
    bubbleSort(a, n);
    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }
    return 0;
}