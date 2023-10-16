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
    string s;
    cin>>s;
    int n=s.length();
    int l=0,r=1;
    int ans = 0;
    while(l<n){
        while(s[l]==s[r]){
            r++;
        }
        ans = max(ans,r-l);
        l++;

    }
    cout<<ans;
    
}

signed main(){
    cin.tie(nullptr)->sync_with_stdio(false);
    int t=1;
    while(t--){
      solution();
    }
    

    return 0;
}