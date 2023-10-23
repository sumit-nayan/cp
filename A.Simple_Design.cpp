#include<bits/stdc++.h>
#define int long long
using namespace std;
bool f(int k, int y){
    int sd = 0;
    while(y){
        sd += y%10;
        y /= 10;
    }
    return sd%k;
}
void solution(){
    int x,k;
    cin>>x>>k;
    int y = x;
    while(f(k,y)){
        y++;
    }
    cout<<y<<endl;
    
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