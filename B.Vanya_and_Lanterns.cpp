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
#define int double
using namespace std;

void solution(){
    int n,l;
    cin>>n>>l;
    vector<int> a(n+2);
    a[0]=0,a[n+1]=l;
    for(int i=1;i<=n;i++){
        cin>>a[i];
    }
    sort(a.begin(),a.end());
    int M = INT_MIN;
    for(int i=0;i<n+1;i++){
        M = max(M,a[i+1]-a[i]);
    }
    M = max({M/2,a[1]-a[0],a[n+1]-a[n]});
    cout<<fixed<<setprecision(10)<<M<<endl;
}

signed main(){
    cin.tie(nullptr)->sync_with_stdio(false);
    int t=1;
    while(t--){
      solution();
    }

    return 0;
}