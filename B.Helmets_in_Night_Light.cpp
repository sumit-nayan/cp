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
    int n,p;
    cin>>n>>p;
    vector<int> a(n);
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    vector<int> b(n);
    for(int i=0;i<n;i++){
        cin>>b[i];
    }

    vector<pair<int,int>> v;

    for(int i=0;i<n;i++){
        v.push_back(make_pair(min(p,b[i]),a[i]));
    }
    sort(v.begin(),v.end());
    int cost = p;
    int r = n-1;
    for(int i=0;i<n-1;i++){
        cost += min(v[i].second,r)*v[i].first;
        r -= min(r,v[i].second);
    }
    cout<<cost<<endl;


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