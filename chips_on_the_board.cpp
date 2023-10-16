#include<bits/stdc++.h>
#define int long long
using namespace std;

int solution(){
  int n;
  cin>>n;
  vector<int> a(n);
  vector<int> b(n);
  for (int i = 0; i < n; i++) cin>>a[i];
  for (int i = 0; i < n; i++) cin>>b[i];
  int bm = *min_element(b.begin(),b.end());
  int am = *min_element(a.begin(),a.end());
  
  int cost1 = 0;
  for (int i = 0; i < n; i++)
  {
    cost1 += a[i] + bm;
  }

  int cost2 =0;
  for (int i = 0; i < n;i++)
  {
    cost2 += b[i] + am;
  }
  int ans = min(cost1,cost2);
  return ans;
}

signed main(){
    cin.tie(nullptr)->sync_with_stdio(false);

    ostringstream output;
    int t;
    cin>>t;
    while(t--){
      output<<solution()<<endl;
    }
    cout<<output.str();


  return 0;
}