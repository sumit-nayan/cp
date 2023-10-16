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
    int n,k,x;
    cin>>n>>k>>x;
    if(k>n || k>x+1){
        cout<<-1<<endl;
        return;
    }
    if(k==x){
        x--;;
    }

    int fs = ((k-1)*k)/2;

    int rn = n-k;
    int ans = fs + ((x)*rn);
    cout<<ans<<endl;
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