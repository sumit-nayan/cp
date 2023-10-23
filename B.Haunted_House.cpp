#include<bits/stdc++.h>
// #define int long long
using namespace std;
int btd(string s, int n){
    int base = 1;
    int ans = 0;
    for(int i=n-1;i>=0;i--){
        if(s[i]=='1'){
            ans += base;
        }
        base *= 2;
    }
    return ans;
}
// x & (1 << k)
int noofonesforizero(string s,int n, int i){
    int ans = 0;
    int k = n-1;
    int t = i;
    while(i>0 && k>=0){
        if(s[k]=='0'){
            i--;
            ans += n-k-1+t-i;
        }
        k--;
    }
    if(i==0){
        return ans;
    }else{
        return -1;
    }
}
int f(string s,int n, int i){
    s.reserve();
    return 1;
}
void solution(){
    int n;
    cin>>n;
    string s;
    cin>>s;
    // cout<<btd(s,n)<<endl;
    // for(int i=0;i< n;i++){
    //     cout<<s[i]-48<<" ";
    // }
    // for(int i=1;i<=n;i++){
    //     cout<<noofswap(s,n,i)<<" ";
    // }
    // cout<<endl;
    for(int i=1;i<=n;i++){
        cout<<noofonesforizero(s,n,i)<<" ";
    }
    cout<<endl;
    



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