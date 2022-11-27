#include<bits/stdc++.h>
using namespace std;

void subSeq(char ind,vector<char> &seq, vector<char> &sseq){
    if(ind==seq.size()){
        for(auto i:sseq){
            cout<<i<<" ";
        }
        if(sseq.size()==0){
            cout<<"{}";
        }
        cout<<endl;
        return; 
    } 

    sseq.push_back(seq[ind]);
    subSeq(ind+1, seq, sseq);
    sseq.pop_back();
    subSeq(ind+1, seq, sseq);
}

int main(){
    vector<char> seq={'a','b','c'};
    vector<char> sseq;
    subSeq(0,seq,sseq);
}