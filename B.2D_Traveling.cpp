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
#define int  long long
using namespace std;

void solution(){
    int n,k,a,b;
    cin>>n>>k>>a>>b;
    vector<pair<int,int>> v(n);
    for(int i=0;i<n;i++){
        int x,y;
        cin>>x>>y;
        v[i]={x,y};
    }
    int p1=INT_MAX,p2=INT_MAX;
    
    int price=abs(v[a-1].first-v[b-1].first)+abs(v[a-1].second-v[b-1].second);

    for(int i=0;i<k;i++){
        p1 = min(p1, abs(v[a-1].first-v[i].first)+abs(v[a-1].second-v[i].second));
        p2 = min(p2, abs(v[b-1].first-v[i].first)+abs(v[b-1].second-v[i].second));
    }
    int price2 = p1+p2;
    cout<<min(price,price2)<<endl;
    
    
    
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