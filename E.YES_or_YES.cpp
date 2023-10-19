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
    if(s[0]!='Y' && s[0]!='y'){
        cout<<"NO"<<endl;
        return;
    }
    if(s[1]!='E' && s[1]!='e'){
        cout<<"NO"<<endl;
        return;
    }
    if(s[2]!='S' && s[2]!='s'){
        cout<<"NO"<<endl;
        return;
    }
    cout<<"YES"<<endl;
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