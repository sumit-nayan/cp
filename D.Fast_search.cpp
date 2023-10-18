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


int solution(vector<int> v, int n, int l, int r){
    int lp1=0,lp2=n-1;
    while(lp1<=lp2){
        int mid = lp1 + (lp2-lp1)/2;
        if(v[mid]>=l){
            lp2 = mid-1;
        }else{
            lp1 = mid+1;
        }
    }
    int rp1=0,rp2=n-1;
    while(rp1<=rp2){
        int mid = rp1 + (rp2-rp1)/2;
        if(v[mid]>r){
            rp2 = mid-1;
        }else{
            rp1 = mid+1;
        }
    }
    return rp2-lp1+1;
}

signed main(){
    cin.tie(nullptr)->sync_with_stdio(false);
    int n;
    cin>>n;
    vector<int> v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    sort(v.begin(),v.end());
    int t;
    cin>>t;
    while(t--){
      int l,r;
      cin>>l>>r;
      cout<<lower_bound(v.begin(),v.end(),r)-upper_bound(v.begin(),v.end(),l)<<endl;
    }

    return 0;
}