/*
Syntax and Important Function:
1. int minimum = *min_element(v.begin(),v.end());
2. int sum  = accumulate(a.begin(), a.end(), 0ll); // Where 0 is initial sum
3. Better way to output using ostringstream output
    Syntax: 
            ostringstream output;
            output<<solution()<<endl;  //Yahan aake collect ho jata hai
            cout<<output.str();

*/

#include<bits/stdc++.h>
#define int long long
using namespace std;

void solution(){
    int n;
    cin>>n;
    vector<int> v(n);
    if(n==1||n==2||n==3||n==4){
        cout<<"NO SOLUTION";
    }else{
        int p1=0,p2=1;
        int t = ceil(n/2);
        int v1=1,v2=t+1;
        while(p1<n){
            v[p1]=v1;
            p1++;
            p1++;
            v1++;
        }
        while(p2<n){
            v[p2]=v2;
            p2++;
            p2++;
            v2++;
        }   

        for(int i=0;i<n;i++){
            cout<<v[i]<<" ";
        }   
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