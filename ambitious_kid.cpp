# include<iostream>
# include<limits.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    int arr[n];
    int mini=INT_MAX;
    for(int i=0;i<n;i++){
        cin>>arr[i];
        mini=min(mini,abs(arr[i]));
    }
    cout<<mini<<endl;
return 0;
}