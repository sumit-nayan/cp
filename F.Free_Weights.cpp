#include<bits/stdc++.h>
#define int long long
using namespace std;

void solution(){
    int n;
    cin>>n;
    vector<pair<int,int>> v1(n);
    for (int i = 0; i < n; i++)
    {
        int x;
        cin>>x;
        v1[i] = {x,x}
    }
    sort(v1.begin(),v1.end());


    vector<pair<int,int>> v2(n);
    for (int i = 0; i < n; i++)
    {
        int x;
        cin>>x;
        v2[i] = {x,x}
    }
    sort(v2.begin(),v2.end());vector<int> v2(n);
    for (int i = 0; i < n; i++)
    {
        cin>>v2[i]; 
    }
    sort(v2.begin(),v2.end());
    int ans = INT_MIN;

    // for (int i = 0; i < n-1; i++)
    // {
    //     if(v1[i]==v1[i+1]){
    //         continue;
    //     }else{
    //            ans = max(ans,v1[i+1]); 
    //     }
    // }
    // for (int i = 0; i < n-1; i++)
    // {
    //     if(v2[i]==v2[i+1]){
    //         continue;
    //     }else{
    //         ans = max(ans,v2[i+1]); 
    //     }
    // }
    
    cout<<ans<<endl;
    
    
}

signed main(){
    cin.tie(nullptr)->sync_with_stdio(false);

    int t=1;
    while(t--){
        solution();
    }

    return 0;
}