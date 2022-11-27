#include<bits/stdc++.h>
using namespace std;

int check(int i,vector<int> &s,vector<int> &ss, int sum, int t){
    if(i==s.size()){
        if(t==sum){
            // for(auto a:ss) cout<<a<<" ";
            // cout<<endl;
            return 1;
        }
        return 0;
    }
    ss.push_back(s[i]);
    sum+=s[i];
    int l = check(i+1,s,ss,sum,t);
    
    sum-=s[i];
    ss.pop_back();
    int r = check(i+1,s,ss,sum,t);
    return l+r;
}

int main(){
    vector<int> s={2,1,3,5};
    vector<int> ss;
    int sum=0;
    cout<<check(0,s,ss,sum,4);
}