#include<bits/stdc++.h>
#define int long long
using namespace std;

int bs(vector<int>& v,int n, int x){
    if(x<v[0]){
        return 0;
    }
    int l=0,r=n-1;
    int mid;
    while(l<=r){
        mid = l + (r-l)/2;
        if(v[mid]>x){
            r = mid-1;
        }else{
            l = mid+1;
        }
    }
    
    return l;

}
// 0 2 4 0 5
void solution(){
    int n,k;
    cin>>n>>k;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
    {
        cin>>v[i];
    }
    for(int i=0;i<k;i++){
        int x;
        cin>>x;
        cout<<bs(v,n,x)<<endl;
    }
    
    

}

signed main(){
    cin.tie(nullptr)->sync_with_stdio(false);

    int t=1;
    while(t--){
        solution();
    }

    return 0;
}