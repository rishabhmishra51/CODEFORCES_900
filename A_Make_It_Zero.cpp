#include<bits/stdc++.h>
using namespace std;
#define int long long
signed main() {
    int t;
    cin >> t;
    while (t--) {
     int n;
     cin >>n;
    int arr[n];
    for(int i=0;i<n;i++){
     cin >> arr[i];
    }
    if(n&1){
     cout << "4\n";
     cout << 1 <<" "<< n-1<<endl;
     cout << 1 <<" "<< n-1<<endl;
     cout << n-1 <<" "<< n<<endl;
     cout << n-1 <<" "<< n<<endl;
    }
    else{
     cout <<"2\n";
     cout << 1 << " "<<n<<endl;
     cout << 1 << " "<<n<<endl;

    }
       
    }
}
