#include<bits/stdc++.h>
using namespace std;
#define int long long int
signed main(){
     int t;
     cin >>t;
     while(t--){
          int n;
          cin >> n;
          int arr[n],c=0,z=0;
          for(int i=0;i<n;i++){
               cin >> arr[i];
               if(arr[i]==1 ){
                    c++;
               }
               if(arr[i]==0){
                    z++;
               }
          }
          int ans =  (c *(1ll<<z));
          cout <<ans <<endl;

     }
}