#include<bits/stdc++.h>
#define int long long
using namespace std;

void solution(){
    int n;
    cin>>n;
    int ans=0;
    ans += n/100;
    n = n%100;
    ans += n/20;
    n = n%20;
    ans += n/10;
    n = n%10;
    ans += n/5;
    n = n%5;
    ans += n/1;




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