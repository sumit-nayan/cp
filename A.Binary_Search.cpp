#include<bits/stdc++.h>
#define int long long
using namespace std;
/* Use this for better & fast output
        ostringstream output;
*/

string bs(vector<int> &v, int x){
    int l=0,r=v.size()-1;
    while(l<=r){
        int mid = (l + r)/2;
        if(v[mid]==x){
            return "YES";
        }else if(v[mid]>x){
            r = mid-1;
        }else{
            l = mid+1;
        }
    }
    return "NO";

}
void solution(){
    int n,k;
    cin>>n>>k;
    vector<int>v(n);
    for (int i = 0; i < n; i++)
    {
        cin>>v[i];
    }
    ostringstream output;
    for (int i = 0; i < k; i++)
    {
        int x;
        cin>>x;
        output<<bs(v,x)<<endl;
    }

    cout<<output.str();
    
    
}

signed main(){
    cin.tie(nullptr)->sync_with_stdio(false);

    int t;
    t=1;
    while(t--){
        solution();
    }

    return 0;
}