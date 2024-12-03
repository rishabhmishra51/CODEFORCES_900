#include<bits/stdc++.h>
using namespace std;
int main(){
     int t;
     cin >>t;
     while(t--){
          int n;
          cin >>n;
          vector<int>arr(n+1);
           int mn =1e9;
           int mx = -1e9;
          int ans = arr[n]-arr[1];
       
          for(int i=1;i<=n;i++){
               cin >>arr[i];
               if(i!=1) mx = max(mx,arr[i]);
               if(i!=n) mn = min(mn,arr[i]);
               if(i!=1) ans = max(ans,arr[i-1]-arr[i]);
          }
          ans = max(ans,(mx-arr[1]));
          ans = max(ans,arr[n]-mn);
    
         cout <<ans<<endl;
     }
}