#include<bits/stdc++.h>
#define int long long
using namespace std;

// void solution(){
//     int m,k,a1,ak;
//     cin>>m>>k>>a1>>ak;
//     int x = m - (a1 + (ak*k));
//     if(x<=0){
//         cout<<0<<endl;
//         return;
//     }
//     if(x%k==){

//     }

// }

void solution2(){
    int m,k,a1,ak;
    cin>>m>>k>>a1>>ak;

    int tk = m/k;
    int t1 = m%k;
    int fk = max(tk-ak,0ll);
    int l1 = max(0ll,a1-t1);
    int r = min(l1/k,fk);
    int f1 = max(0ll,t1-a1);
    cout<<f1+fk-r<<endl;
}

signed main(){
    cin.tie(nullptr)->sync_with_stdio(false);
    int t;
    cin>>t;
    while(t--){
      solution2();
    }

    return 0;
}
