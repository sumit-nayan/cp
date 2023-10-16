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

    if(n==1||n==2||n==3||n==4||n==5||n==6||n==9){
        cout<<"NO"<<endl;
        return;
    }

    int x = n%3;
    if(x==1){
        cout<<"YES"<<endl;
        cout<<1<<" "<<2<<" "<<n-3<<endl;
        return;
    }
    if(x==2){
        cout<<"YES"<<endl;
        cout<<1<<" "<<2<<" "<<n-3<<endl;
        return;
    }
    if(x==0){
        cout<<"YES"<<endl;
        cout<<1<<" "<<4<<" "<<n-5<<endl;
        return;
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