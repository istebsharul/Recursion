#include<bits/stdc++.h>
using namespace std;

//Using Recursion
bool p(int i, string &s){
    if(i >= s.size()/2) return true;
    if(s[i] != s[s.size()-i-1]) return false;
    return p(i+1, s);
}

//Time Complexity is O(n/2)
//Space Complexity is O(n/2) Auxillary Space

int main(){
    string s="MALAYALAM";
    // int n=s.length();
    cout<<p(0, s);
    return 0;
}