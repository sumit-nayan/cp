#include<bits/stdc++.h>
#define int long double
#define asv int
using namespace std;
int n,k;
vector<int> size;
int eps = 0.00000001;
int MAX = 1e7;
bool predict_fn(int x){
    int sum = 0;
    for(int i=0;i<n;i++){
        sum += floor(size[i]/x);
    }
    return sum>=k;
} 

signed main(){
    cin.tie(nullptr)->sync_with_stdio(false);
    cin>>n>>k;
    size = vector<int> (n);
    for(int i=0;i<n;i++){
        cin>>size[i];
    }

    int l=0,r=1e9;
    // for(int i=1;i<250;i++){
    //     cout<<predict_fn(i)<<endl;
    // }
    // jab eps jayda ho then better to use for loop instead for while loop qki mid na khoj paya then infinite loop mein chla jayega
    // while(r-l>epoch){
    //     int mid = l + (r-l)/2;
    //     if(predict_fn(mid)){
    //         l = mid;
    //     }else{
    //         r = mid;
    //     }
    // }

    for(int i=0;i<=100;i++){ // 100 iteraton is sufficient
        int mid = l + (r-l)/2;
        if(predict_fn(mid)){
            l=mid;
        }else{
            r=mid;
        }
    }
    
    cout<<setprecision(7)<<l<<endl;
    
    return 0;
}