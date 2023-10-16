#include <iostream>
using namespace std;

long long s_sqrt(long long n){
    long long l = -1, r = 1e9;
    while (r - l > 1) {
        long long mid = (l + r) / 2;
        if (mid * mid >= n)
            r = mid;
        else
            l = mid;
    }
    return r;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        long long n;
        cin >> n;
        cout<<s_sqrt(n)-1<<endl;
    }
    return 0;
}


