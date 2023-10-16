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
    int n,k;
    cin>>n>>k;
    int n1 = n/((k*k*k)+(k*k)+(k)+1);
    int n2 = n1*k;
    int n3 = n2*k;
    int n4 = n3*k;
    cout<<n1<<" "<<n2<<" "<<n3<<" "<<n4<<endl;
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