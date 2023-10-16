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
#define int unsigned long long
using namespace std;
bool is_prefect_square(int x){
    int p1=0,p2=x;
    int mid;
    while(p1<=p2){
        mid = p1 + (p2-p1)/2;
        if(mid*mid==x){
            return true;
        }else if(mid * mid > x){
            p2 = mid-1;
        }else{
            p1 = mid+1;
        }
    }
    return false;
}

bool is_prime_number(int x){
    if(x==1) return false;
    for(int i=2;i*i<=x;i++){
        if(x%i==0){
            return false;
        }
    }
    return true;
}
void solution(){
    int n;
    cin>>n;
    if(!is_prefect_square(n)){
        cout<<"NO"<<endl;
        return;
    }else{
        if(is_prime_number(sqrt(n))){
            cout<<"YES"<<endl;
        }else{
            cout<<"NO"<<endl;
        }
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