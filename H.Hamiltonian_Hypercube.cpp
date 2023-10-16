#include<bits/stdc++.h>
#define int long long
using namespace std;


int gbd(string g, int n){
    vector<int>b(n);
    b[0] = g[0]-'0';
    for (int i = 1; i < n; i++)
    {
        b[i] = b[i-1] ^ (g[i]-'0');
    }

    int d=0;
    for (int i = 0; i < n; i++)
    {
        d = d + (b[n - i - 1] << i);

    }
    return d;
}



void solution(){
    int n;
    cin>>n;
    string a,b;
    cin>>a>>b;
    cout<<max(0ll,gbd(b,n)-gbd(a,n)-1)<<endl;

    
}

signed main(){
    cin.tie(nullptr)->sync_with_stdio(false);

    int t=1;
    while(t--){
        solution();
    }

    return 0;
}