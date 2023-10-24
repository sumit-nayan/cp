#include<bits/stdc++.h>
#define int long long
using namespace std;

void solution(){
    int a,b;
    cin>>a>>b;
    cout<<min({a,b,(a+b)/3})<<endl;
    
        

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