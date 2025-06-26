#include<bits/stdc++.h>
using namespace std;

bool rotateString(string s, string goal) {
    if (s.length() != goal.length()) return false;
    string concat = s + s;
    return concat.find(goal) != -1;
    return false;
}

int main(){
    string s, goal;
    cin >> s >> goal;
    //call
    cout << (rotateString(s, goal) ? "true" : "false");
    return 0;
}