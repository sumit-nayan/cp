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
static bool cmp(int a,int b){
    return a>b;
}
void solution(){
    int n;
    cin>>n;
    vector<int> total(n);
    int j=0;
    while(n--){
        int sum=0;
        for(int i=0;i<4;i++){
            int x;
            cin>>x;
            sum+=x;
        }
        total[j]=sum;
        j++;
    }
    int thomas = total[0];
    sort(total.begin(),total.end(),cmp);
    cout<<upper_bound(total.begin(),total.end(),thomas)-total.begin()<<endl;
}

signed main(){
    cin.tie(nullptr)->sync_with_stdio(false);
    int t=1;
    while(t--){
      solution();
    }

    return 0;
}