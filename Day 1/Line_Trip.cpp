#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n,x;
        cin>>n>>x;
        vector<int>arr;
        arr.push_back(0);
        for(int i=0;i<n;i++){
            int p;
            cin>>p;
            arr.push_back(p);
        }
        arr.push_back(x);
        n = arr.size();
        int ans = INT_MIN;
        for(int i=1;i<n;i++){
            if(i == n-1) ans = max(ans, 2*(arr[i]-arr[i-1]));
            else ans = max(ans, arr[i]-arr[i-1]);
        }
        cout<<ans;
    }
    return 0;
}
