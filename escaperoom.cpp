#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<int>a(n);
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    vector<int>ans;
    set<int,greater<int>>st;
    for(int i=1;i<=n;i++){
        st.insert(i);
    }
    set<int, greater<int> >::iterator it;
    for(int i=0;i<n;i++){
        it = next(st.begin(), a[i]-1);
        ans.push_back(*it);
        st.erase(*it);
    }
    for(auto i:ans){
        cout<<i<<" ";
    }
    cout<<endl;

    return 0;
}