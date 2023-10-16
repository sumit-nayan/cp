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

int solution(){
    int a,b,c;
    cin>>a>>b>>c;
    int l = 2*(abs(a-b));
    if(a>l||b>l|| c>l){
        return -1;
    }else{
        int x = c+(l/2);
        if(x>l){
            return abs(l-x);
        }else{
            return x;
        }
    }

}

signed main(){
    cin.tie(nullptr)->sync_with_stdio(false);
    int t;
    cin>>t;
    ostringstream output;
    while(t--){
      output<<solution()<<endl;
    }
    cout<<output.str();

    return 0;
}