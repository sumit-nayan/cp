#include<bits/stdc++.h>
#define int long long
using namespace std;
int n;
vector<int> a;
signed main(){
    cin.tie(nullptr)->sync_with_stdio(false);
    cin>>n;
    a = vector<int> (n);
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int result=1;
    int ans = 1;
    for(int i=0;i<n-1;i++){
        if(a[i]<=a[i+1]){
            ans++;
            result = max(result,ans);
        }else{
            ans = 1;
        }
    }
    cout<<result<<endl;

   



    return 0;
}