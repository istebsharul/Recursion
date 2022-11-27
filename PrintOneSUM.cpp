#include<bits/stdc++.h>
using namespace std;

bool check(int i,vector<int> &s,vector<int> &ss, int sum, int t){
    if(i==s.size()){
        if(t==sum){
            for(auto a:ss) cout<<a<<" ";
            cout<<endl;
            return true;
        }
        return false;
    }
    ss.push_back(s[i]);
    sum+=s[i];
    if(check(i+1,s,ss,sum,t)==true){
        return true;
    }
    
    sum-=s[i];
    ss.pop_back();
    if(check(i+1,s,ss,sum,t)==true){
        return true;
    }
    return false;
}

int main(){
    vector<int> s={1,2,1,3,5};
    vector<int> ss;
    int sum=0;
    check(0,s,ss,sum,5);
}