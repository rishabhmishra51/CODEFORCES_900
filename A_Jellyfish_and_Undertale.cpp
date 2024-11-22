#include<bits/stdc++.h>
using namespace std;
#define int long long
signed main() {
    int t;
    cin >> t;
    while (t--) {
        int a,b,n;
        cin >> a >> b>>n;
        vector<int>v(n);
        for(auto &i:v) cin >> i;
        int timer = b-1;
        b=1;
        for(int i=0;i<n;i++){
          b = min((b+v[i]),a);
          timer +=(b-1);
          b=1;

        }
        cout << timer+b<<endl;
        
    }
}
