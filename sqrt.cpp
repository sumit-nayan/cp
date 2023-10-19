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
#define int long double
using namespace std;

int solution(int x){
    int l=0,r=x;
    int mid; 
    while(r-l>1){
        mid = l + (r-l)/2;
        if(mid*mid>=x){
            r = mid;
        }else{
            l = mid;
        }
    }
    return r;
}

signed main(){
    cout<<"BLANK"<<endl;
    cin.tie(nullptr)->sync_with_stdio(false);
    int t;
    cin>>t;
    while(t--){
      int x;
      cin>>x;
      cout<<ceil(solution(x))<<endl;
    }

    return 0;
}