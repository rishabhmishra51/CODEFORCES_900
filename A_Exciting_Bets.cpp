#include<bits/stdc++.h>
using namespace std;
#define int long long
signed main(){
     int t;
     cin >>t;
     while(t--){
          int a,b;
          cin >>a>>b;
          if(a==b){
                cout <<"0 0"<<endl;
              
          }
          else{
         int exce = abs(a-b);
         int g = abs(a-b);
         int ans=min(b%g,g-b%g);
          cout << exce <<" "<< ans<<endl;
          }
     }  
   
}