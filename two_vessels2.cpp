#include<bits/stdc++.h>
using namespace std;
int main(){

    int t;
    cin>>t;
    

    while(t){

        int a,b,c;
        cin>>a>>b>>c;
        int avg = (a+b)/2;

        if(a>b){
            int cnt = (a-avg)/c;
            if((a-avg)%c==0){
                cout<<cnt<<endl;
            }else{
                cout<<cnt+1<<endl;
            }
        }else{
            int cnt = (b-avg)/c;
            if((b-avg)%c==0){
                cout<<cnt<<endl;
            }else{
                cout<<cnt+1<<endl;
            }
        }


        t--;
    }


    return 0;
}