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
    int n = s.size();
    int p1=0,p3=0;
    for(int i=0;i<n;i++){
        if(s[i]=='3'){
            p3=i;
        }
        if(s[i]=='1'){
            p1=i;
        }
    }
    if(p1>p3){
        cout<<31<<endl;
    }else{
        cout<<13<<endl;
    }
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