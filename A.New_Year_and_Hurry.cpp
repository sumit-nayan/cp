#include<bits/stdc++.h>
#define int long long
using namespace std;
int n,k;
bool predicate_fn(int p){
    return (5*p*(p+1))/2 <= (240-k);
}

signed main(){
    cin.tie(nullptr)->sync_with_stdio(false);
    cin>>n>>k;
    // for(int i=1;i<=n;i++){
    //     cout<<predicate_fn(i)<<endl;
    // }
    int l=0,r=n;
    while(r-l>1){
        int mid = l + (r-l)/2;
        if(predicate_fn(mid)){
            l=mid;
        }else{
            r=mid-1;
        }
    }
    if(predicate_fn(r)){
        cout<<r<<endl;
    }else{
        cout<<l<<endl;
    }


    return 0;
}