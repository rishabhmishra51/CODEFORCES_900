#include<bits/stdc++.h>
using namespace std;


int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
       vector<int>arr(n+1,0);
   for(int i=1;i<=n;i++) cin>>arr[i];
   int ops =0;
   for(int i=1;i<=n;i++){
     if(arr[i]>0 && arr[i-1]==0) ops++;
   }
   cout<< min(ops,2) <<endl;

    }
}
