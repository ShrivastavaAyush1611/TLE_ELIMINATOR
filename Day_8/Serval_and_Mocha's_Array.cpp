#include <iostream>
#include <vector>
#include <numeric>
using namespace std;
long long gcd(long long a, long long b) {
    if (b == 0) return a;
    return gcd(b, a % b);
}
int main() {
    int t;
    cin >> t;
    while (t--) {
        long long n;
        cin >> n;
        vector<long long> arr(n);
        for (int i = 0; i < n; i++) cin >> arr[i];

        int flag = 0;
        for (int i = 0; i < n; i++) {
            for (int j = i + 1; j < n; j++) {
                long long g = gcd(arr[i], arr[j]);
                if (g <= 2) flag = 1;
            }
        }

        if (flag == 0) cout << "NO" << endl;
        else cout << "YES" << endl;
    }
    return 0;
}