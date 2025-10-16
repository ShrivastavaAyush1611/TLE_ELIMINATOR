#include<iostream>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        long long n;
        cin >> n;
        long long a[n];
        for(int i = 0; i < n; i++) cin >> a[i];
        
        long long cnt = 0, mx = 0;
        for(int i = 0; i < n; i++){
            if(a[i] == 0) cnt++;
            else cnt = 0;
            mx = max(mx, cnt);
        }
        cout << mx << endl;
    }
    return 0;
}
