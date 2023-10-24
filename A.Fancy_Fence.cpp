#include<bits/stdc++.h>
using namespace std;
void solution(){
    int a;
    cin>>a;
    if(360%(180-a)==0){
        cout<<"YES"<<endl;
    }else{
        cout<<"NO"<<endl;
    }
}
int main(){
    int t;
    cin>>t;
    while(t--){
        solution();
    }
    return 0;
}