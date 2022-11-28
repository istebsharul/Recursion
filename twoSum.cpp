#include<bits/stdc++.h>
using namespace std;

bool comSum(int i, int t, vector<int> &s,vector<int> &sum){
    // Base Case
    if(i==s.size()){
        if(t==0){
            for(auto a:sum) cout<<a<<" ";
            cout<<endl;
            return true;
        }
        // cout<<endl;
        return false;
    }
    if(s[i]<=t){
        sum.push_back(s[i]);
        if(comSum(i,t-s[i], s,sum)==true){
            return true;
        }
        sum.pop_back();
    }
    
    if(comSum(i+1, t, s, sum)==true){
        return true;
    }
    return false;

}                                               

int main(){
    vector<int> s={2,7,11,15,5,4};
    vector<int> sum;
    int t= 9;
    comSum(0,t,s,sum);
    // return 0;
}