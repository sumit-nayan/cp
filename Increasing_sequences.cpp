#include<iostream>
#include<vector>
using namespace std;
int main(){
    int t;
    cin>>t;

    while(t--){
        int n;
        cin>>n;
        vector<int> v(n);
        for (int  i = 0; i < n; i++)
        {
            cin>>v[i];
        }
        int ans=1;

        for (int  i = 0; i < n; i++)
        {
            if(v[i]==ans){
                ans++;
            }
            ans++;
        }

        cout<<ans-1<<endl;
        

        


        
    }

    return 0;
}