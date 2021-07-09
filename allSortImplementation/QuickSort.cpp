#include<bits/stdc++.h>
using namespace std;
void quickSort(int a[], int l, int r) {
    int pivot = partition(a, l, r);
    if(l < pivot - 1) {
        quickSort(a, l, pivot - 1);
    }
    if(pivot < r) {
        quickSort(a, pivot, r);
    }
}
int partition(int a[], int left, int right) {
    int med = a[left + (right - left) / 2];
    while(left <= right) {
        if(a[left] < med) left++;
        if(a[right] > med) right--;
        if(left <= right) {
            swap(a[left], a[right]);
            left++;
            right--;
        } 
    }
    return left;
}
int main() {
    int n;
    cin >> n;
    int a[500];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    quickSort(a, 0, n - 1);
    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }
    return 0;
}