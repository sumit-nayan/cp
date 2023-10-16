#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;
        int ans = 0;

        vector<pair<int, int>> v(n);

        for (int i = 0; i < n; i++) {
            cin >> v[i].first >> v[i].second;
        }
        
        int w = v[0].first;
        for (int i = 1; i < n; i++) {
            if (v[i].first >= w) {
                if (v[i].second >= v[0].second) {
                    ans = -1;
                    break; 
                }
            }
        }
        if (ans != -1) {
            ans = w;
        }
        
        cout << ans << endl;
    }

    return 0;
}
