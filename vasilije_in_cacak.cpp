#include<bits/stdc++.h>
using namespace std;
void solution(){
    long long n,k,x;
    cin>>n>>k>>x;
    if(k>n || k>x || (k*(k+1))/2 > x || ((n*(n+1))/2) - ( ((n-k)*(n-k+1)/2) ) < x){
        cout<<"NO";
    }else{
        cout<<"YES";
    }
    cout<<endl;
}
int main(){
    cin.tie(nullptr)->sync_with_stdio(false);
    int t;
    cin>>t;
    while(t--){
        solution();
    }
    return 0;
}