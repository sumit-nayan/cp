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
#define int double long
using namespace std;
int s_sqrt(int n){
		    int l = -1, r = 1e9;
		    while (r - l > 0.0000001) {
			int mid = (l + r) / 2;
			if (mid * mid >= n)
			    r = mid;
			else
			    l = mid;
		    }
		    return r;
		   }
int distance(int x1, int y1, int x2, int y2){
    return s_sqrt(pow((x2-x1),2)+pow((x2-x1),2));
}
void solution(){
    int n,h;
    cin>>n;
    vector<pair<int,int>> crd(n+1);
    for(int i=0;i<n+1;i++){
        int x,y;
        cin>>x>>y;
        crd[i]==make_pair(x,y);
        int pd = distance(0,h,-1e18,0);
        cout<<pd<<endl;
    }
    h = crd[n].second;


}

signed main(){
    cin.tie(nullptr)->sync_with_stdio(false);
    int t=1;
    while(t--){
      solution();
    }

    return 0;
}