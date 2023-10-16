/*
Syntax and Important Function:
1. int minimum = *min_element(v.begin(),v.end());
2. int sum  = accumulate(a.begin(), a.end(), 0ll); // Where 0 is initial sum
3. Better way to output using ostringstream output
    Syntax: 
            ostringstream output;
            output<<solution()<<endl;  //Yahan aake collect ho jata hai
            cout<<output.str();

*/

#include<bits/stdc++.h>
#define int long long
using namespace std;

int XOR(vector<int> &v,int l, int r){
    int ans = l;
    for(int i=l+1;i<=r;i++) ans = ans ^ v[i];
    return ans;
}
void solution(){
    int n;
    cin>>n;
    vector<int>v(n);
    for(int i=0;i<n;i++) cin>>v[i];
    int k=8;
    int l=0,r=n-1;
    
    cout<<1<<endl<<l<<" "<<r<<endl;

    



}

signed main(){
    cin.tie(nullptr)->sync_with_stdio(false);
    ostringstream output;
    int t;
    cin>>t;
    while(t--){
      solution();
    }
    // cout<<output.str();

    return 0;
}