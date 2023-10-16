#include<bits/stdc++.h>
#define int long long
using namespace std;

void solution(){
    char m,n,o;
    cin>>m>>n>>o;
    if(m=='a' || n=='b' || o=='c'){
        cout<<"YES"<<endl;
    }else{
        cout<<"NO"<<endl;
    }
}

signed main(){
    cin.tie(nullptr)->sync_with_stdio(false);

    int t;
    cin>>t;
    while(t--){
        solution();
    }

    return 0;
}