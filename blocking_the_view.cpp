#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<vector<int>> v;

    for (int i = 0; i < n; i++)
    {
        vector<int> temp;
        for (int j = 0; j < 10; j++)
        {
            int x;
            cin>>x;
            temp.push_back(x);
        }
        v.push_back(temp);
        
    }

    
    int i=0;
    while(i<n){

        int m1 = (v[i][5]-v[i][1]) / (v[i][4]-v[i][0]);
        int m2 = (v[i][7]-v[i][3]) / (v[i][6]-v[i][2]);
        int vision = v[i][9]/v[i][8];
        if(m1==vision || m2==vision){
            cout<<"Yes"<<endl;
        }else{
            cout<<"No"<<endl;
        }

        i++;
    }
    



    return 0;
}