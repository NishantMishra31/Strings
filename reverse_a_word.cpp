#include<bits/stdc++.h>
using namespace std;

string rev_string(string s) {
    int i = 0, j = s.length() - 1;
    while(i<=j){
        swap(s[i], s[j]);
        i++;
        j--;
    }
    return s;
}

int main(){
    string s;
    cin >> s;
    //call
    cout << rev_string(s);
    return 0;
}