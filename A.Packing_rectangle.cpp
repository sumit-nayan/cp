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

signed main(){
    cin.tie(nullptr)->sync_with_stdio(false);

    int t;
    t=1;;
    while(t--){
        solution();
    }

    return 0;
}