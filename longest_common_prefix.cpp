#include <bits/stdc++.h>
using namespace std;

string longestCommonPrefix(vector<string>& strs) {
    if (strs.empty()) return "";
    string prefix = "";
    int minLen = strs[0].length();
    for (int i = 0; i < minLen; ++i) {
        char ch = strs[0][i];
        for (int j = 1; j < strs.size(); ++j) {
            if (i >= strs[j].length() || strs[j][i] != ch) {
                return prefix;
            }
        }
        prefix += ch;
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