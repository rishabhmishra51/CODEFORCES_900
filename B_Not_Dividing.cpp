   #include<bits/stdc++.h>
using namespace std;
#define int long long

signed main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
       
  
       vector<int>pre(n);
       for(int i=0;i<n;i++){
         cin >> pre[i];
         if(pre[i]==1){
          pre[i]++;
         }
       }
     for(int i=0;i<n-1;i++){
       
         if(pre[i+1]%pre[i]==0){
          pre[i+1]++;
         }
       }
      for(int i=0;i<n;i++){
       
       cout << pre[i]<<" ";
       }
       cout <<endl;

    }
}
