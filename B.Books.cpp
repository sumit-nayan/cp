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
    int n,t;
    cin>>n>>t;
    vector<int> time(n);
    for(int i=0;i<n;i++){
        cin>>time[i];
    }
    int p1=0,p2=0,ans=0;
    while(p1<n){
        while(p2<n && t>=time[p2]){
            t -= time[p2];
            p2++;
        }
        ans = max(ans,p2-p1);
        t += time[p1];
        p1++;
    }
    cout<<ans<<endl;
}

signed main(){
    cin.tie(nullptr)->sync_with_stdio(false);
    int t=1;
    while(t--){
      solution();
    }

    return 0;
}