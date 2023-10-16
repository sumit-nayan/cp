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
    int n,m;
    cin>>n>>m;
    string x,s;
    cin>>x>>s;


    string X;
    while(X.length()<=50){
        X+=x;
    }

    int i = X.find(s);
    if(i == string :: npos){
        cout<<-1<<endl;
        return;
    }

    int j= i+m;
    if(j<=n){
        cout<<0<<endl;
        return;
    }

    int ans = ceil((log(ceil(j/n)))/log(2));
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