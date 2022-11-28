#include<bits/stdc++.h>
using namespace std;

void check(int i,vector<int> &s,vector<int> &ss, int sum, int t){
    // Base Case
    if(i==s.size()){
        if(t==sum){
            for(auto a:ss) cout<<a<<" ";
            cout<<endl;
        }
        return;
    }
    // Include
    ss.push_back(s[i]);
    sum+=s[i];
    check(i+1,s,ss,sum,t);
    
    // Exclude
    sum-=s[i];
    ss.pop_back();
    check(i+1,s,ss,sum,t);
}

int main(){
    vector<int> s={1,2,1,3,5};
    vector<int> ss;
    int sum=0;
    check(0,s,ss,sum,5);
}