#include<bits/stdc++.h>
using namespace std;
#define int long long
signed main() {
    int t;
    cin >> t;
    while (t--) {
        int n, k,x;
        cin >> n >> k>>x;
        int minimum_sum = (k*(k+1))/2;
        int maximum_sum = (k*(2*n-k+1))/2;

        if((minimum_sum<= x) && (x<= maximum_sum) ){
          cout <<"YES\n";
        }
        else{
          cout <<"NO\n";
        }
        
    }
}
