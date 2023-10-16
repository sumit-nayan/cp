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
#define float double
using namespace std;

const double p=1e-6;
void solution(){
    int Px,Py,Ax,Ay,Bx,By;
    cin>>Px>>Py>>Ax>>Ay>>Bx>>By;
    float l=0, h=10000;
    float ans;
    while(h-l>p){
        float mid = (l+h)/2;
        float ao = ((Ax)*(Ax))+((Ay)*(Ay))-(mid*mid);
        float bo = ((Bx)*(Bx))+((By)*(By))-(mid*mid);
        float ap = ((Ax-Px)*(Ax-Px))+((Ay-Py)*(Ay-Py))-(mid*mid);
        float bp = ((Bx-Px)*(Bx-Px))+((By-Py)*(By-Py))-(mid*mid);
        if((ao<=0 && ap<=0) || (bo<=0 && bp<=0)){
            ans=mid;
            h=mid-0.000001;
        }else if(ao<=0 && bp<=0 && ((Ax-Bx)*(Ax-Bx))-((Ay-By)*(Ay-By)-(4*mid*mid))<=0){
            ans=mid;
            h=mid-0.000001;
        }else if(ap<=0 && bo<=0 && ((Ax-Bx)*(Ax-Bx))-((Ay-By)*(Ay-By)-(4*mid*mid)<=0)){
            ans=mid;
            h=mid-0.000001;
        }else{
            l=mid+0.000001;
        }
        
    }
    cout<<fixed<<setprecision(6)<<ans<<endl;
}

float distance(int x1, int y1, int x2, int y2){
    return sqrt(pow((x1-x2),2.0)+pow((y1-y2),2.0));
}

void solution2(){
    int Px,Py,Ax,Ay,Bx,By;
    cin>>Px>>Py>>Ax>>Ay>>Bx>>By;
    float AO = distance(Ax,Ay,0,0);
    float BO = distance(Bx,By,0,0);
    float AB = distance(Ax,Ay,Bx,By)/2;
    float AP = distance(Ax,Ay,Px,Py);
    float BP = distance(Bx,By,Px,Py);

    float r1c1 = max(AO,AP);
    float r2c1 = max(BO,BP);

    float r1c2 = max({AB,AO,BP});
    float r2c2 = max({AB,AP,BO});

    cout<<fixed<<setprecision(10)<<min({r1c1,r2c1,r1c2,r2c2})<<endl;

}



signed main(){
    cin.tie(nullptr)->sync_with_stdio(false);
    int t;
    cin>>t;
    while(t--){
      solution2();
    }

    return 0;
}