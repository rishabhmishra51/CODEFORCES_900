#include <bits/stdc++.h>
using namespace std;
#define int long long

signed main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;

        if (n % 2 != 0) {
            cout << -1 << endl; 
            continue;
        }
                int k = n, p = n;
        int minCount = 0, maxCount = 0;

        // Calculate minimum count
        while (k > 0) {
            if (k % 4 == 0) {
                maxCount += k / 4;
                k = 0;
                break;
            } else {
                k -= 6;
                maxCount++;
            }
        }

        // Calculate maximum count
        while (p > 0) {
            if (p % 6 == 0) {
                minCount += p / 6;
                p = 0;
                break;
            } else {
                p -= 4;
                minCount++;
            }
        }

        if (k < 0 || p < 0) {
            cout << -1 << endl; // If either becomes negative, no solution exists.
        } else {
            cout<< minCount<<" " << maxCount << endl;
        }
    }

    return 0;
}
