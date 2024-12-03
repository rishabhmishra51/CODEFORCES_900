#include <bits/stdc++.h>
using namespace std;
#define int long long

signed main() {
    int t;
    cin >> t;
    while (t--) {
       int n,k;
       cin >>n>>k;
        vector<int> v(n);
        for (auto &i : v) cin >> i;        

      
        if (n == 1) {
            cout << 0 << endl;
            continue;
        }

        sort(v.begin(), v.end());  

        
        int max_len = 1, curr_len = 1;

        
        for (int i = 1; i < n; i++) {
            if ((v[i] - v[i - 1]) <= k) {
                curr_len++; 
            } else {
                max_len = max(max_len, curr_len); 
                curr_len = 1;
            }
        }

        
        max_len = max(max_len, curr_len);

        
        cout << n - max_len << endl;
    }
    return 0;
}
