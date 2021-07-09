#include <bits/stdc++.h>
using namespace std;
void merge(int arr[], int helper[], int l, int m, int r)
{
    for (int i = l; i <= r; i++)
    {
        helper[i] = arr[i];
    }
    int helperLeft = l;
    int helperRight = m + 1;
    int current = l;
    while (helperLeft <= m && helperRight <= l)
    {
        if (helper[helperLeft] <= helper[helperRight])
        {
            arr[current] = helper[helperLeft];
            helperLeft++;
        }
        else
        {
            arr[current] = helper[helperRight];
            helperRight++;
        }
        current++;
    }
    while (helperLeft <= m)
    {
        arr[current] = helper[helperLeft];
        helperLeft++;
        current++;
    }
    while (helperRight <= r)
    {
        arr[current] = helper[helperRight];
        helperRight++;
        current++;
    }
}
void mergeSort(int arr[], int helper[], int l, int r)
{
    if (l < r)
    {
        int m = l + (r - l) / 2; // thay vì dùng (l + r) / 2 để tránh tràn số
        mergeSort(arr, helper, l, m);
        mergeSort(arr, helper, m + 1, r);
        merge(arr, helper, l, m, r);
    }
}
int main()
{
    int n;
    cin >> n;
    int arr[500];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int helper[500];
    mergeSort(arr, helper, 0, n - 1);
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}