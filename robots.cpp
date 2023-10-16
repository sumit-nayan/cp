#include<bits/stdc++.h>
using namespace std;
// bool cmp(pair<int,int> i1, pair<int,int> i2)
// {
//     return (i1.second < i2.second);
// }
  
int main(){
    double n;
    cin>>n;
    double n1=n;
    double v=0;
    vector<pair<double,double>> vct;
    double x1=0, x2=0;
    while(n--){
        float a,s;
        cin>>a>>s;
        vct.push_back({a,s});
        x1 += (v*s) + (double)(a*s*s)/2;
        v += a*s;        
    }


    sort(vct.begin(),vct.end());
    v=0;
    for(int i=n1-1;i>=0;i--){
        x2 += v*(vct[i].second) + ((vct[i].first) * (vct[i].second)  * (vct[i].second))/2;
        v += vct[i].first * vct[i].second;
    }



    double ans=(double)x2-x1;
    cout<< fixed <<setprecision(1)<<ans <<endl;


    return 0;
}