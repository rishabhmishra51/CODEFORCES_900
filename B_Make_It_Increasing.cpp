#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t; 
    while (t--) {
        int n;
        cin >> n;
        vector<int> arr(n);
        for (int i = 0; i < n; i++) cin >> arr[i]; 
        int ops = 0; 
        bool invalid = false; 
        
       
        for (int i = n - 2; i >= 0; i--) {
            while (arr[i] >= arr[i + 1]) {
                arr[i] /= 2;
                ops++; 
                
       
                if (arr[i] == 0 && arr[i + 1] == 0) {
                    invalid = true;
                    break;
                }
            }
            if (invalid) break;
        }
        
      
        if (invalid) {
            cout << -1 << endl; 
        } else {
            cout << ops << endl; 
        }
    }
    return 0;
}
