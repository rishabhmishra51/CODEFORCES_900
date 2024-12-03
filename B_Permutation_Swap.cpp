#include<bits/stdc++.h>
using namespace std;
#define int long long
signed main() {
    int t;
    cin >> t;
    while (t--) {
     int n;
     cin >>n;
   
        int gcd =0;
     for(int i=1;i<=n;i++){
          int p;
          cin >>p;
          int k = abs(p-i);
          gcd =__gcd(k,gcd);

     }
   cout << gcd<<endl;


 
    }
}
