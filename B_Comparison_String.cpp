#include<bits/stdc++.h>
using namespace std;
#define int long long
signed main() {
    int t;
    cin >> t;
    while (t--) {
     int n;
     cin >>n;

   string s;
    cin >>s;
    int count =1,maxi =1 ;
  for(int i=1;i<n;i++){
     if(s[i]==s[i-1]){
          count++;
     }
     else{
          count=1;
     }
     maxi = max(count,maxi);
  }
 
  cout<<maxi+1<<endl;
    }
}
