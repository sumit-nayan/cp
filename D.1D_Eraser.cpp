#include<bits/stdc++.h>
#define int long long
using namespace std;

void solution(){
    //wrong, one case miss ho rha hai
    int n,k;
    cin>>n>>k;
    int p1=0,p2=0;
    vector<char> v(n);
    for (int i = 0; i < n; i++)
    {
        cin>>v[i];
    }
    for (int i = 0; i < n; i++)
    {
        if(v[i]=='B'){
            p1=i;
            break;
        }
    }
    for (int i = n-1; i >= 0; i--)
    {
        if(v[i]=='B'){
            p2=i;
            break;
        }
    }
    if(p2-p1==0){
        cout<<0<<endl;
    }else if((p2-p1+1)%k==0){
        cout<<(p2-p1+1)/k<<endl;
    }else{
        cout<<((p2-p1+1)/k)+1<<endl;
    }
    
    
}

void solution2(){
    int n,k;
    cin>>n>>k;
    int t = k;
    int p1=0;
    vector<char> v(n);
    for (int i = 0; i < n; i++)
    {
        cin>>v[i];
    }

    int ans=0;
    while(p1<n){
        while(v[p1]!='B' && p1<n){
            p1++;
        }
        if(v[p1]=='B'){
            ans++;
            t = k;
            while (p1<n && t)
            {
                v[p1] = 'W';
                t--;
                p1++;
            }            
        }else{
            p1++;
        }
        
    }

    cout<<ans<<endl;
    return;
    


}

void solution3(){
    // After Editorial
    //Same as solution 2 but faltu ka kaam hta de
    int n,k;
    cin>>n>>k;
    string s;
    cin>>s;  // best way to take string as input

    int ans=0;
    for (int i = 0; i < n; i++)
    {
        if(s[i]=='B'){
            ans++;
            i += k-1;
        }
    }
    cout<<ans<<endl;
    

}
signed main(){
    cin.tie(nullptr)->sync_with_stdio(false);

    int t;
    cin>>t;
    while(t--){
        solution3();
    }

    return 0;
}