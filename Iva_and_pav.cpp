#include<bits/stdc++.h>
#define int long long
using namespace std;

void solution(){
    int n;
    cin>>n;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
    {
        cin>>v[i];
    }
    int q;
    cin>>q;
    for (int i = 0; i < q; i++)
    {
        int l,k;
        cin>>l>>k;
        int flr = v[l-1];
        int r=-1;
        int m;
        for ( m = l; m < n; m++)
        {
            if(flr >=k){
                r = max(r,m-1);
            }
            flr = flr & v[m];
            
        }
        //last mein krna acha hota hai ye qki for last wale case
        if(flr >=k){
                r = max(r,m-1);
            }
        if(r==-1){
            cout<<-1<<" ";
        }else{
            cout<<r+1<<" ";
        }
        
    }
    cout<<endl;  
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