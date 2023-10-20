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
vector<int> tree;
int n;
int amountofwood(int x){
    
    int ans = 0;
    for(int i=0;i<n;i++){
        ans += max(tree[i]-x,0ll);
    }
    return ans;
}

signed main(){
    cin.tie(nullptr)->sync_with_stdio(false);
    int m;
    cin>>n>>m;
    tree = vector<int> (n);
    for(int i=0;i<n;i++){
        cin>>tree[i];
    }
    int l=0,r=1000000,mid;
    while(r-l>1){
        mid = l + (r-l)/2;
        int x = amountofwood(mid);
        if(x<m){
            r = mid-1;
        }else{
            l = mid;
        }
    }
    if(amountofwood(r)>=m){
        cout<<r<<endl;
    }else{
        cout<<l<<endl;
    }

    

    return 0;
}