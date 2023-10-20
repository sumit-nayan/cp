#include<bits/stdc++.h>
#define int long long
using namespace std;
// 3 2 1 0 3
void solution(){
    int n,k;
    cin>>n>>k;
    vector<int> a(n);
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    vector<int> h(n);
    for(int i=0;i<n;i++){
        cin>>h[i];
    }

    int ans = 0,collected=0;
    int p1=0,p2=0;
    while(p1<n){
        ans = 0;
        while(p2<n-1 && h[p2]%h[p2+1]==0 && collected<=k){
            ans++;
            collected += a[p2]; 
            p2++;
        }
        collected += a[p2];
        ans = max(ans,p2-p1);
        collected -= a[p1];
        p1++;

    }
    cout<<ans<<endl;
    
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