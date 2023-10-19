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
// 2 9 12 16 25
#include<bits/stdc++.h>
#define int long long
using namespace std;
int t;
// int solution(vector<int> w, int x){
//     int l = 0,r=t-1;
//     int mid;
//     while(r-l>1){
//         mid = l + (r-l)/2;
//         if(w[mid]>x){
//             r = mid-1;
//         }elsea{
//             l = mid;
//         }
//     }

//     return l;
// }

signed main(){
    cin.tie(nullptr)->sync_with_stdio(false);
    cin>>t;
    int sum=0;
    vector<int> w(t);
    for(int i=0;i<t;i++){
        int x;
        cin>>x;
        sum += x;
        w[i]=sum;
    }

    int m;
    cin>>m;
    while(m--){
      int x;
      cin>>x;
      // cout<<solution(w,x)<<endl;
      auto ans = lower_bound(w.begin(),w.end(),x);
      cout<<ans-w.begin() + 1<<endl;
    }

    return 0;
}