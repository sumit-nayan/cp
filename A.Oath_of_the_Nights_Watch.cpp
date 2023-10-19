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
    int n;
    cin>>n;
    vector<int> crow(n);
    for(int i=0;i<n;i++){
        cin>>crow[i];
    }
    sort(crow.begin(),crow.end());
    int s=1,e=1;
    for(int i=1;i<n;i++){
        if(crow[i]==crow[0]){
            s++;
        }else{
            break;
        }
    }
    for(int i=n-2;i>=0;i--){
        if(crow[i]==crow[n-1]){
            e++;
        }else{
            break;
        }
    }

    cout<<max(0ll,(n-s-e))<<endl;
    
    
}

signed main(){
    cin.tie(nullptr)->sync_with_stdio(false);
    int t=1;
    while(t--){
      solution();
    }

    return 0;
}