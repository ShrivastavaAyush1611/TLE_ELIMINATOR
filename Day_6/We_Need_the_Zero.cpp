#include<iostream>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        long long n;
        cin >> n;
        long long a[n], x ;
        for(int i = 0; i < n; i++){
            cin >> a[i];
            x ^= a[i];
        }
        if(n % 2) cout << x <<endl;
        else cout << (x == 0 ? 0 : -1) <<endl;
    }
    return 0;
}
