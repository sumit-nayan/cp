#include<bits/stdc++.h>
#define int long long
using namespace std;
int n,x,y;
bool predicate_fn(int t){
  t -= min(x,y);
  return ((t/x)+(t/y))+1>=n;
}

signed main(){
    cin.tie(nullptr)->sync_with_stdio(false);
    cin>>n>>x>>y;
    // for(int i=1;i<=10;i++){
    //   cout<<predicate_fn(i)<<endl;
    // }
    int l=0,r=1e12;
    // for(int i=0;i<=100;i++){
    //   int mid = l + (r-l)/2;
    //   if(predicate_fn(mid)){
    //     r=mid;
    //   }else{
    //     l=mid-1; 
    //   }
    // }
    // cout<<r<<endl;
    while(r-l>1){
        int mid = l + (r-l)/2;
        if(predicate_fn(mid)){
          r=mid;
        }else{
          l=mid+1; 
        }
    }


    if(predicate_fn(l)){
      cout<<l<<endl;
    }else{
      cout<<r<<endl;
    }

    return 0;
}