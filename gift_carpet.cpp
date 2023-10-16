#include<iostream>
#include<vector>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t){

        int n,m;
        cin>>n>>m;


        vector<string> v(n);

        for(int i=0;i<n;i++){
            cin>>v[i];
        }


        string track = "vika";
        int c = 0;

        for (int j = 0; j < m; j++)
        {
            for (int i = 0; i < n; i++)
            {
                if(v[i][j]==track[c] && c<4){
                    c++;
                    break;
                }
            }
            
        }

        if(c==4) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;


        t--;
    }
}