#include<bits/stdc++.h>
using namespace std;
#define int long long
signed main() {
    int t;
    cin >> t;
    while (t--) {
        int n, k;
        cin >> n >> k;
        string s;
        cin >> s;
        vector<int> v(26, 0);

        for (auto ch : s) {
            v[ch - 'a']++;
        }

        int odd_count = 0;
        for (int i = 0; i < 26; i++) {
            if (v[i] & 1) { 
                odd_count++;
            }
        }

        if (k >= (odd_count - 1)) {
            cout << "YES\n";
        } else {
            cout << "NO\n";
        }
    }
}
