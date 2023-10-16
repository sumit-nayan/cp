#include<bits/stdc++.h>
using namespace std;
int min_div(int n){
    for(int i=2;i<n;i++){
        if(n%i==0){
            return i;
        }
    }
    return n;
}
int main(){

    int t;
    cin>>t;

    while(t--){
        int l,r;
        cin>>l>>r;

        for(int i=l;i<=r;i++){
            int md = min_div(i);
            if(md!=i){
                cout<<md<<" "<<i-md<<endl;
                break;
            }else if(i == r){
                cout<<-1<<endl;
            }
        }
    }


    return 0;
}