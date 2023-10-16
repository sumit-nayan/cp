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

int score(char a, char b, char c, char d){
    int k=max({a,b,c,d});
    int ans = 4*k - a - b - c -d;
    return ans;

}
void solution(){
    int n;
    cin>>n;
    vector<vector<char>> a(n,vector<char>(n));
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cin>>a[i][j];
        }
    }
    int ans=0;
    for(int i=0;i*2<n;i++){
        for(int j=0;j*2<n;j++){
            ans += score(a[i][j],a[j][n-1-i],a[n-1-j][i],a[n-1-i][n-1-j]);
        }
    }
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