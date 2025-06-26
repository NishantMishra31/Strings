#include <bits/stdc++.h>
using namespace std;

string reverseWords(string s) {
    int n = s.size();
    reverse(s.begin(), s.end());
    string word, ans;
    int i = 0;
    while (i < n) {
        while (i < n && s[i] == ' ') i++;
        word = "";
        while (i < n && s[i] != ' '){
            word += s[i];
            i++;
        }
        if (!word.empty()) {
            if (!ans.empty()) ans += " ";
            reverse(word.begin(), word.end());
            ans += word;
        }
    }
    return ans;
}

int main() {
    string s;
    getline(cin, s);
    cout << reverseWords(s);
    return 0;
}
