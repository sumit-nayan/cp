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
    int x,y,n;
    cin>>x>>y>>n;
    vector<int> ans(n);
    
    ans[n-1]=y;
    for(int i=n-2,j=1;i>=0;i--,j++){
        ans[i]=ans[i+1]-j;
    }
    if(ans[0]<x){
        cout<<-1<<endl;
        return;
    }else{
        ans[0]=x;
    }
    for(int i=0;i<n;i++){
        cout<<ans[i]<<" ";
    }
    cout<<endl;


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