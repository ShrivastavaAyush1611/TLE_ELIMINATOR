#include<iostream>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        long long n;
        cin >> n;
        string s;
        cin >> s;
        long long l = 0, r = n - 1, ans = n;
        while(l <= r){
            if(s[l] != s[r]) ans -= 2;
            else break;
            l++; r--;
        }
        cout << ans <<endl;
    }
    return 0;
}
