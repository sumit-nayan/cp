#include<bits/stdc++.h>
#define int long long
using namespace std;

void solution(){
    // Failed on test case 4, Time Limit Exceed 
    //Use binary search to optamize
    int n,x;
    cin>>n>>x;
    vector<int> v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    if(n==1){
        cout<<x+v[0]<<endl;
        return;
    }

    int xi = 0;
    int h = 1;
    while(xi<x){
        xi = 0;
        h++;
        for (int i = 0; i < n; i++)
        {
            xi += max(0ll, (h-v[i]));
        }
        
    }
   
    if(xi==x){
        cout<<h<<endl;
    }else{
        cout<<h-1<<endl;
    }
    

    
}

void solution2(){
    //solution 1 is correct but not efficient, use binary search 
    int n,x;
    cin>>n>>x;
    vector<int> v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
    }

    int l=0;
    int r=2'000'000'007; 
    while(l<r){
        int mid = l + (r-l+1)/2;
        int xi = 0;
        for(int i=0;i<n;i++){
            xi += max(mid-v[i], 0ll);
        }
        if(xi<=x){
            l = mid;
        }else{
            r = mid-1;
        }

    }
    cout<<l<<endl;






}
signed main(){
    cin.tie(nullptr)->sync_with_stdio(false);

    int t;
    cin>>t;
    while(t--){
        solution2();
    }

    return 0;
}