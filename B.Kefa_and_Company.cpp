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
    int n,d;
    cin>>n>>d;
    vector<pair<int,int>> a(n);
    for(int i=0;i<n;i++){
        int x,y;
        cin>>x>>y;
        a[i] = make_pair(y,x);
    }
    sort(a.begin(),a.end());
    int ans = INT_MIN;
    int diff = 0,p1=0,p2=0;
    while(p1<n){
        while(p2<n && d>diff){
            ans += a[p2].first;
            
        }
    }

}

signed main(){
    cin.tie(nullptr)->sync_with_stdio(false);
    int t=1;
    while(t--){
      solution();
    }

    return 0;
}