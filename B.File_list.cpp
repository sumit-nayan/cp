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
    
    //Egde case
    int start=0;
    for(int i=0;s[i]!='.';i++){
        start++;
    }
    int last=0;
    for(int i=n-1;s[i]!='.';i--){
        last++;
    }
    if(start>8 || last>3){
        cout<<"NO";
        return;
    }


    //general
    vector<string> final;

    
}

signed main(){
    cin.tie(nullptr)->sync_with_stdio(false);
    int t=1;
    while(t--){
      solution();
    }

    return 0;
}