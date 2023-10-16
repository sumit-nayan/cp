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

void solution(){
    int n,m;
    cin>>n>>m;
    vector<int> a(n);
    for(int i=0;i<n;i++) cin>>a[i];
    vector<int> b(m);
    for(int i=0;i<m;i++) cin>>b[i];
    int bm = *max_element(b.begin(),b.end());
    int bM = *min_element(b.begin(),b.end());
    for(int i=0;i<n;i++){
        b[i]=a[i]|bm;
    }
    int x=b[0];
    for(int i=1;i<n;i++){
        x = x ^ b[i];
    }
    int ansM = x;
    
    for(int i=0;i<n;i++){
        a[i]=a[i]|bM;
    }
    x=b[0];
    for(int i=1;i<n;i++){
        x = x ^ a[i];
    }
    int ansm = x;
    cout<<ansm<<" "<<ansM<<endl;



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