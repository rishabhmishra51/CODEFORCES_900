#include<bits/stdc++.h>
using namespace std;
#define int long long
#define nl '\n'
#define sp ' '
signed main(){
     int t;
     cin >>t;
     while(t--){
         int n,x;
         cin >>n>>x;
         vector<int>arr(n);
         for(int i=0;i<n;i++) cin >> arr[i];
         int sum=0;
         int max_beauty=0;
         int min_beauty =0;
         for(int i=0;i<n;i++){
          if(arr[i]%x==0){
               max_beauty += (arr[i]/x);
          }
          else{
             max_beauty += ( (arr[i]/x)+1);
          }
          sum += arr[i];
         }
         if(sum%x==0){
          min_beauty += (sum/x);
         }
         else{
          min_beauty +=(sum/x)+1;
         }

         cout << min_beauty <<" "<< max_beauty<<endl;
     }
}