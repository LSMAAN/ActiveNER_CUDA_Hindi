#include<bits/stdc++.h>
using namespace std;
#define ll long long int


int main() {
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<ll> arr;
        for(int i = 0; i < 2*n; i++){
            int x;
            cin>>x;
            arr.push_back(x);
        }

        sort(arr.begin(), arr.end());

        ll mini = 1e9;

        for(int i = 0; i <=n; i++){
            mini = min(mini, arr[n+i-1] - arr[i]);
        }

        cout<<mini<<endl;
    }
    return 0;
}
