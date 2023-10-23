#include<bits/stdc++.h>
#define int long long
using namespace std;
bool predicate_fn(int n,int k, int x){
    return x-(x/n)>=k;
}
void solution(){
    int n,k;
    cin>>n>>k;
    // for(int i=1;i<=20;i++){
    //     cout<<predicate_fn(n,k,i)<<endl;
    // }
    int l=0,r=n*k;
    while(r-l>1){
        int mid = l + (r-l)/2;
        if(predicate_fn(n,k,mid)){
            r = mid;
        }else{
            l = mid;
        }
    }
    cout<<r<<endl;
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