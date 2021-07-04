/*
Check Permutation: Given two strings, write a method to decide if one is a permutation of the other.(assume case sensitive and white space is significant)
- Tạm thời sẽ có 2 cách, đó là lưu các ký tự xuất hiện và freq của nó vào trong hashmap, xong kiểm tra với string 2, mỗi lần xuất hiện 1 ký tự tìm thấy trong hashmap
thì trừ đi 1 vào freq. Cuối cùng duyệt cái hashmap ấy, nếu có bất cứ cặp nào mà có value khác 0 thì là false. Time: O(n)
- Cách 2 là sort string rồi so sánh từ phần tử 1 của 2 string ấy
*/
#include <bits/stdc++.h>
using namespace std;
bool checkPermutation(string a, string b) {
    if(a.size() != b.size()) return false;
    unordered_map<char, int> um;
    for(char c : a) {
        um[c]++;
    }
    for(char c : b) {
        um[c]--;
        if(um[c] < 0) return false;
    }
    return true;
}
int main() {
    string a, b;
    // trong trường hợp mà chỉ nhập các dấu cách thì đầu vào phải là getline()
    getline(cin, a);
    getline(cin, b);
    cout << checkPermutation(a, b);
    return 0;
}