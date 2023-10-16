/*
Syntax and Important Function:
1. int minimum = *min_element(v.begin(),v.end());
2. int sum  = accumulate(a.begin(), a.end(), 0ll); // Where 0 is initial sum
3. Better way to output using ostringstream output
    Syntax: 
            ostringstream output;
            output<<solution()<<endl;  //Yahan aake collect ho jata hai
            cout<<output.str();

*/

#include<bits/stdc++.h>
#define int long long
using namespace std;

int solution(){
    int n,m,k;
    cin>>n>>m>>k;
    vector<int>j(n);
    for(int i=0;i<n;i++) cin>>j[i];
    vector<int> g(m);
    for(int i=0;i<m;i++) cin>>g[i];

    //First round
    k--;
    int x=0,y=0;
    for(int i=0;i<n;i++) if(j[i]<j[x]) x=i;
    for(int i=0;i<m;i++) if(g[i]>g[y]) y=i;
    if(j[x]<g[y]) swap(j[x],g[y]);
    
    if(k%2==1){
        x=0,y=0;
        for(int i=0;i<n;i++) if(j[i]>j[x]) x=i;
        for(int i=0;i<m;i++) if(g[i]<g[y]) y=i;
        swap(j[x],g[y]);
    }
    int ans = 0;
    for(int i=0;i<n;i++) ans += j[i];
    return ans;
}

signed main(){
    cin.tie(nullptr)->sync_with_stdio(false);
    stringstream output;
    int t;
    cin>>t;
    while(t--){
      output<<solution()<<endl;
    }
    cout<<output.str();

    return 0;
}