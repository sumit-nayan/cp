#include<bits/stdc++.h>
#define int long long
using namespace std;
void add_pdivisors(int x,unordered_map<int,int>& prime_divisors){
    int i=2;
    while(i*i <= x){
        while(x%i==0){
            prime_divisors[i]++;
            x /= i;
        }
        i++;
    }
    if(x>1) prime_divisors[x]++;
}
void solution(){
    int n;
    cin>>n;
    unordered_map<int,int> prime_divisors;
    for(int i=1;i<=n;i++){
        int x;
        cin>>x;
        add_pdivisors(x,prime_divisors);
    }
    for(auto i:prime_divisors){
        if(i.second % n!=0){
            cout<<"NO"<<endl;
            return;
        }
    }
    cout<<"YES"<<endl;
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