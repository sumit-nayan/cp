#include<bits/stdc++.h>
using namespace std;
void solution1(){
    // wrong solution, question galat samjh liya tha
    unordered_map<int, int> mp;
    int n,k;
        cin>>n>>k;
        while(n--){
            int x;
            cin>>x;
            mp[x]++;
        }

        auto max = max_element(mp.begin(),mp.end());
        int max_value = max->first;
        if(k==max_value){
            cout<<"YES"<<endl;
        }else{
            cout<<"NO"<<endl;
        }
}

void solution2(){
    int n,k;
    cin>>n>>k;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
    {
        cin>>v[i];
    }

    if(find(v.begin(),v.end(),k) == v.end()){
        cout<<"NO"<<endl;
    }else{
        cout<<"YES"<<endl;
    }
    
    return;
}
int main(){
    cin.tie(nullptr)->sync_with_stdio(false);
    int t;
    cin>>t;

    while(t--){
        solution2();
    }

    return 0;
}