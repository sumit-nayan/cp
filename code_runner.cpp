#include<bits/stdc++.h>
using namespace std;
bool isstacksame(stack<char> s,stack<char> t){
    if(s.size()!=t.size()){
        return false;
    }
    while(!s.empty()){
        if(s.top()==t.top()){
            s.pop();
            t.pop();
        }else{
            return false;
        }
    }
    return true;

}
bool backspaceCompare(string s, string t) {
        stack<char> stck1;
        int n1=s.size();
        for(int i=0;i<n1;i++){
            if(s[i]=='#' && !stck1.empty()){
                stck1.pop();
            }else if(s[i]!='#'){
                stck1.push(s[i]);
            }
        }

        stack<char> stck2;
        n1=t.size();
        for(int i=0;i<n1;i++){
            if(t[i]=='#' && !stck2.empty()){
                stck2.pop();
            }else if(t[i]!='#'){
                stck2.push(t[i]);
            }
        }

        // return stck1 == stck2;


        return isstacksame(stck1,stck2);

    // stack<char> stck1;
    // stack<char> stck2;

    // // Process string s
    // for (char c : s) {
    //     if (c == '#' && !stck1.empty()) {
    //         stck1.pop(); // Handle backspace
    //     } else if (c != '#') {
    //         stck1.push(c);
    //     }
    // }

    // // Process string t
    // for (char c : t) {
    //     if (c == '#' && !stck2.empty()) {
    //         stck2.pop(); // Handle backspace
    //     } else if (c != '#') {
    //         stck2.push(c);
    //     }
    // }

    // return stck1 == stck2;

    }
int main(){
    string s,t;
    cin>>s>>t;
    cout<<backspaceCompare(s,t);


    return 0;
}