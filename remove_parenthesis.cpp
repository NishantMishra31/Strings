#include<bits/stdc++.h>
using namespace std;

string removeOuterParentheses(string s) {
    stack<char> stk;
    string result;
    int start = 0;
    for (int i = 0; i < s.length(); i++) {
        if (s[i] == '(') stk.push('(');
        else stk.pop();
        if (stk.empty()) {
            result += s.substr(start + 1, i - start - 1);
            start = i + 1;
        }
    }
    return result;
}


int main(){
    string s;
    cin >> s;
    //call
    cout << removeOuterParentheses(s);
    return 0;
}