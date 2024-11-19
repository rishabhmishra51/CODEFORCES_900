#include<bits/stdc++.h>
using namespace std;
int main(){
     int t;
     cin >>t;
     while(t--){
          int a,b,xk,yk,xq,yq;
          cin >> a>>b >>xk>>yk>>xq>>yq;
          int ans=0;
          if(a==b){
               int dx[4]={-a,-a,a,a};
               int dy[4]={b,-b,b,-b};

               for(int i=0;i<4;i++){
                    for(int j=0;j<4;j++){
                         int kpos_kx = xk + dx[i];
                         int kpos_ky = yk + dy[i];                         
                         int qpos_qx = xq + dx[j];                         
                         int qpos_qy = yq + dy[j];                         
                        if(kpos_kx == qpos_qx && kpos_ky == qpos_qy){
                          ans++;
                        }
                    }
               }

          }
          else{
               int dx[8]={a,-a,a,-a,b,-b,b,-b};
               int dy[8]={b,-b,-b,b,a,-a,-a,a};

               for(int i=0;i<8;i++){
                    for(int j=0;j<8;j++){
                         int kpos_kx = xk + dx[i];
                         int kpos_ky = yk + dy[i];                         
                         int qpos_qx = xq + dx[j];                         
                         int qpos_qy = yq + dy[j];                         
                        if(kpos_kx == qpos_qx && kpos_ky == qpos_qy){
                          ans++;
                        }
                    }
               }
          }
          cout << ans <<endl;
     }
}