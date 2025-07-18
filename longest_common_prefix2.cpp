#include <bits/stdc++.h>
using namespace std;

string longestCommonPrefix(vector<string>& strs) {
    if (strs.empty()) return "";
    sort(strs.begin(), strs.end());
    string first = strs[0];
    string last = strs[strs.size() - 1];
    string prefix = "";
    for (int i = 0; i < min(first.size(), last.size()); ++i){
        if (first[i] == last[i]) prefix += first[i];
        else break;
    }
    return prefix;
}

int main() {
    int n;
    cin >> n;
    vector<string> strs(n);
    for (int i = 0; i < n; ++i) {
        cin >> strs[i];
    }
    cout << longestCommonPrefix(strs);
    return 0;
}