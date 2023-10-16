#include<bits/stdc++.h>
using namespace std;
void solution(){
    int n;
    cin>>n;
    vector<vector<int>> v;
    unordered_set<int> s2;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin>>x;
        vector<int> temp(x);
        for (int i = 0; i < x; i++)
        {
            int x;
            cin>>x;
            temp[i]=x;
            s2.insert(x);
        }
        v.push_back(temp);
    }
    int ans =0;
    for (int  i = 1; i <= 50; i++)
    {
        unordered_set<int> s;
        for (int j = 0; j < n; j++)
        {
            if(!binary_search(v[j].begin(), v[j].end(), i)){
                for(auto m: v[j]){
                    s.insert(m);
                }
            }
        }
        int tans = s.size();
        if(tans!=s2.size()){
            ans = max(ans, tans);      
        }
        
    }
    cout<<ans<<endl;
    

    
}
int main(){
    cin.tie(nullptr)->sync_with_stdio(false);
    int t;
    cin>>t;
    while(t--){
        solution();
    }

    return 0;
}