   #include<bits/stdc++.h>
using namespace std;
#define int long long

signed main() {
    int t;
    cin >> t;
    while (t--) {
        int n,q;
        cin >> n>>q;
       int sum=0;
       vector<int>arr(n+1,0);
       for(int i=1;i<=n;i++) cin >>arr[i];
       vector<int>pre(n+1,0);
       for(int i=0;i<=n;i++){
          pre[i]=pre[i-1]+arr[i];
          sum+=arr[i];
       }
       while(q--){
          int l,r,k;
          cin >>l>>r>>k;
          int sumLtoR = (r-l+1)*k;
          int sumlessthanL = pre[l-1];
          int sumgreaterthanR = sum - pre[r];
          int totalSum = sumLtoR+sumlessthanL+sumgreaterthanR;
          if(totalSum & 1){
               cout <<"YES"<<endl;
          }
          else{
               cout << "NO"<<endl;
          }
       }

    }
}
