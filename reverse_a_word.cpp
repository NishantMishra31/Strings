#include<bits/stdc++.h>
using namespace std;

string rev_word(string s) {
    int i = 0, j = s.length() - 1;
    while(i<=j){
        swap(s[i], s[j]);
        i++;
        j--;
    }
    return s;
}

// or just use the stl func reverse

int main(){
    string s;
    cin >> s;
    //call
    cout << rev_word(s);
    return 0;
}