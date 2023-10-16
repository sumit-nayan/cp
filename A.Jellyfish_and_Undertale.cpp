#include<bits/stdc++.h>
#define int long long
using namespace std;

void solution(){
    int a,b,n;
    cin>>a>>b>>n;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
    {
        cin>>v[i];
    }

    int time=b;
    for(int i = 0; i < n; i++)
    {
        if(v[i]>=a){
            time += a -1;
        }else{
            time += min(v[i],a);
        }
        
    }
    cout<<time<<endl;
    
    
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