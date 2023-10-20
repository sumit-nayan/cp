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
// Can't make fn by this method
bool f(int D,int c,vector<int>& stall){
  auto it = stall.begin();
  int d = stall[0];
  while(c--){
    it = lower_bound(stall.begin(),stall.end(),d);
    if(it==stall.end()){
      return false;
    }else{
      d += D;      
    }
  }
  return true;
}
bool f2(int D,int c,vector<int>& stall, int N){
  int lastp = -1;
  for(int i=0;i<N;i++){
    if(stall[i]-lastp>=D || lastp==-1){
      c--;
      lastp = stall[i];
    }
    if(c==0) break;
  }
  return c==0;
}
void solution(){
  int N,C;
  cin>>N>>C;
  vector<int> stall(N);
  for(int i=0;i<N;i++){
    cin>>stall[i];
  }
  sort(stall.begin(),stall.end());
  // for(int i=1;i<=50;i++){
  //   cout<<f2(i,C,stall,N)<<endl;
  // }
  int l=0,r=1e9,mid;
  while(r-l>1){
    mid = l + (r-l)/2;
    if(f2(mid,C,stall,N)){
      l = mid;
    }else{
      r = mid - 1;
    }
  }
  if(f2(r,C,stall,N)){
    cout<<r<<endl;
  }else{
    cout<<l<<endl;
  }


}

signed main(){
    cin.tie(nullptr)->sync_with_stdio(false);
    int t;
    cin>>t;
    while(t--){
      solution();
    }

    return 0;
}