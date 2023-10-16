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
    //Not optamized
    int n;
    cin>>n;
    vector<int> v(n);
    for(int i=0;i<n;i++) cin>>v[i];
    if(v[0]!=n){
        cout<<"NO"<<endl;
        return;
    }
    vector<int> ans(v[0]);
    for(int i=0;i<n;i++){
        for(int j=0;j<v[i];j++){
            ans[j]++;
        }
    }

    for(int i=0;i<n;i++){
        if(v[i]!=ans[i]){
            cout<<"NO"<<endl;
            return;
        }
    }
        cout<<"YES"<<endl;
        return;
    
    
}

//After watching solution
void solution2(){
    int n;
    cin>>n;
    vector<int> v(n+1), r(n+1);
    for(int i=1;i<=n;i++) cin>>v[i];
    if(v[1]!=n){
        cout<<"NO"<<endl;
        return;
    }
    for(int i=1;i<=n;i++){
        r[v[i]]++;
    }
    for(int i=n-1;i>=1;i--){
        r[i] += r[i+1];
    }

    if(r==v){
        cout<<"YES"<<endl;
        return;
    }else{
        cout<<"NO"<<endl;
    }

}

signed main(){
    cin.tie(nullptr)->sync_with_stdio(false);
    int t;
    cin>>t;
    while(t--){
        solution2();
    }


    return 0;
}