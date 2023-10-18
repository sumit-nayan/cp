#include<bits/stdc++.h>
#define int long long
using namespace std;
int MOD = 998244353;
int f(int l,int r, vector<int> v){
    int ans = v[l];
    for(int i=l+1;i<=r;i++){
        ans = ans^v[i];
    }
    return ans;
}

void solution(){
    int n;
    cin>>n;
    vector<int> v(n+1);
    for(int i=1;i<n;i++){
        cin>>v[i];
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