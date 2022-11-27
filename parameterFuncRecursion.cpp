#include<bits/stdc++.h>
using namespace std;
// PARAMETIRIZED
void Son(int i,int sum){
    if(i<1){
        cout<<(sum);
        return;
    }
    Son(i-1,sum+i);
}

// FUNCTIONAL 

int sonN(int n){
    if(n==0){
        return 0;
    }
    else return n+sonN(n-1);
}
int main(){
    int n=3;
    // Son(n,0);

}