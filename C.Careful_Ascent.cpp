#include<bits/stdc++.h>
#define int long long
using namespace std;

void solution(){
    int x,y;
    cin>>x>>y;
    int n;
    cin>>n;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
    {
        int l,u,f;
        cin>>l>>u>>f;
        v[i] = u-l*f;
    }

    
    
    

}

signed main(){
    cin.tie(nullptr)->sync_with_stdio(false);

    int t=1;
    while(t--){
        solution();
    }

    return 0;
}