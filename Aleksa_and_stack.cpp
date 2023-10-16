#include<bits/stdc++.h>
using namespace std;
void solution(){
    int n;
    cin>>n;
    vector<int> v(n);
    v[0]=1;
    v[1]=3;
    for (int  i = 2; i < n; i++)
    {
        v[i] = v[i-1] +1;
        while((3*v[i]) % (v[i-1]+v[i-2])==0){
            v[i]++;
        } 
    }
    for (int i = 0; i < n; i++)
    {
        cout<<v[i]<<" ";
    }
    
    
    cout<<endl;
}
int main(){
    int t;
    cin>>t;
    while(t--){
        solution();
    }
}