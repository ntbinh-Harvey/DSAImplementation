#include<bits/stdc++.h>
using namespace std;
int main() {
    int n ;
    cin >> n;
    int a[n];
    for(int i = 0; i < n; i++) {
        cin >> a[i];
    }
    int target;
    cin >> target;
    unordered_map<int, int> um;
    for(int i = 0; i < n; i++) {
        int rest = target - a[i];
        unordered_map<int, int>::iterator ptr = um.find(rest);
        if(ptr != um.end()) {
            cout << ptr->second << " " << i;
            break;
        } 
        else um[a[i]] = i;
    } 
    return 0;
}