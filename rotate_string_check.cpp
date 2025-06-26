#include<bits/stdc++.h>
using namespace std;

bool rotateString(string s, string goal) {
    if (s.length() != goal.length()) return false;
    int n = s.length();
    for (int i = 0; i < n; ++i) {
        char firstChar = s[0];
        s = s.substr(1) + firstChar;
        if (s == goal) return true;
    }
    return false;
}


int main(){
    string s, goal;
    cin >> s >> goal;
    //call
    cout << (rotateString(s, goal) ? "true" : "false");
    return 0;
}