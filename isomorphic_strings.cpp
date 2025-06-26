#include<bits/stdc++.h>
using namespace std;

bool isIsomorphic(string s, string t){
    if (s.length() != t.length()) return false;
    unordered_map<char, char> mapST;
    unordered_map<char, char> mapTS;
    for (int i = 0; i < s.length(); ++i){
        char chS = s[i];
        char chT = t[i];
        if (mapST.count(chS)){
            if (mapST[chS] != chT) return false;
        } 
        else{
            mapST[chS] = chT;
        }
        if (mapTS.count(chT)){
            if (mapTS[chT] != chS) return false;
        }
        else{
            mapTS[chT] = chS;
        }
    }
    return true;
}

int main(){
    string s,  t;
    cin >> s >> t;
    //call
    cout << (isIsomorphic(s, t) ? "true" : "false");
    return 0;
}