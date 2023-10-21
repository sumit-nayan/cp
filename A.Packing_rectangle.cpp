#include<bits/stdc++.h>
#define int long long
using namespace std;
const int MAXN = 2'000'000'000'000;
void solution(){
    int w,h,n;
    cin>>w>>h>>n;
    int am = w*h*n;
    int l=0, r = MAXN;
    while(l<r){
        int mid = (l + (r-l))/2;
        int ai = mid*mid;
        if(ai<=am){
            l = mid;
        }else{
            r = mid-1;
        }
    }
    cout<<l<<endl;

}
int w,h,n;
bool predicate_fn(int x){
    return floor(x/w)*floor(x/h)>=n;
}

signed main(){
    cin.tie(nullptr)->sync_with_stdio(false);
    cin>>w>>h>>n;
    int l=0,r=max(w,h)*n;
    // for(int i=1;i<31;i++){
    //     cout<<predicate_fn(i)<<endl;
    // }
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