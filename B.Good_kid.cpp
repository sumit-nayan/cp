#include<bits/stdc++.h>
#define int long long
using namespace std;

void solution(){
    int n;
    cin>>n;
    vector<int> v(n);
    int ans = 1;
    int m = INT_MAX;
    int pm;
    for (int i = 0; i < n; i++)
    {
        cin>>v[i];
        if(m>v[i]){
            m = min(m,v[i]);
            pm = i;
        }
        
    }
    v[pm] += 1;
    for(int i = 0; i < n; i++)
        {
            ans = ans*v[i];
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