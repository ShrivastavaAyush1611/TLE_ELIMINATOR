#include <iostream>
#include <vector>
using namespace std;

bool check(long long x){
    long long digits = 0, zeroes = 0;
    while(x){
        if(x % 10 == 0) zeroes++;
        digits++;
        x /= 10;
    }
    return zeroes == digits - 1;
}

int main(){
    vector<long long> roundNums;
    for(long long i = 1; i <= 999999; i++){
        if(check(i)) roundNums.push_back(i);
    }

    int t;
    cin >> t;
    while(t--){
        long long n;
        cin >> n;
        long long ans = 0;
        for(int i = 0; i < roundNums.size(); i++){
            if(roundNums[i] <= n) ans++;
            else break;
        }
        cout << ans << endl;
    }
    return 0;
}
