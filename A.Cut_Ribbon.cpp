#include<bits/stdc++.h>
#define int long long
using namespace std;

int dp(int n,int a, int b, int c){
    if(n==0) return 0;
    int x = min({a,b,c});
    return 1;

    return max({dp(n-a,a,b,c),dp(n-b,a,b,c),dp(n-c,a,b,c)});
    
}

signed main(){
    cin.tie(nullptr)->sync_with_stdio(false);
    int n,a,b,c;
    cin>>n>>a>>b>>c;
    cout<<dp(n,a,b,c)<<endl;



    return 0;
}