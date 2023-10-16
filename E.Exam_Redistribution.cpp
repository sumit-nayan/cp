#include<bits/stdc++.h>
#define int long long
using namespace std;

void solution(){
    int n;
    cin>>n;
    vector<pair<int,int>> v(n);
    int sum = 0;
    int M = INT_MIN;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin>>x;
        v[i] = {x,i+1};
        sum += x;
        M = max(M,x);
    }
    int rsum = sum - M;

    if(M>rsum){
        cout<<"impossible"<<endl;
    }else{
        sort(v.rbegin(),v.rend());
        ostringstream output;
        for (int i = 0; i < n; i++)
        {
            output<<v[i].second<<" ";
        }
        cout<<output.str();        
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