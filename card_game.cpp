#include<bits/stdc++.h>
#define int long long
using namespace std;
typedef long long ll;
typedef long double ld;

void solution(){
    int n;
    cin>>n;
    vector<int> v(n);
    int psum=0, ans=0;
    for (int  i = 0; i < n; i++)
    {
        cin>>v[i];
        if(v[i]>0){
            psum += v[i];
        }
    }
    

    if(v[0]>=0){
        cout<<psum<<endl;
        return;
    }

    ans = max(ans, psum+v[0]);

    if(v[1]>=0){
        ans = max(ans, psum-v[1]);
    }else{
        ans = max(ans,psum);
    }
    cout<<ans<<endl;
    return;
    
    
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