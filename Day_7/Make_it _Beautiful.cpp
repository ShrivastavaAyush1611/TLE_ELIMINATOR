#include <iostream>
#include<vector>
#include <algorithm> 
using namespace std;

// --Solution 1 

// bool isBeautiful(vector<int> &a) {
//     long long prefixSum = 0;
//     for (int i = 0; i < a.size(); i++) {
//         if (a[i] == prefixSum) return false;
//         prefixSum += a[i];
//     }
//     return true;
// }
// int main() {
//     int t;
//     cin >> t;
//     while (t--) {
//         int n;
//         cin >> n;
//         vector<int> a(n);
//         for (int i = 0; i < n; i++) cin >> a[i];
//         sort(a.begin(), a.end());
//         if (a[0] == a[n-1]) {
//             cout << "NO"<<endl;
//             continue;
//         }
//         bool found = false;

//         do {
//             if (isBeautiful(a)) {
//                 cout << "YES"<<endl;
//                 for (int x : a) cout << x << " ";
//                 cout << endl;
//                 found = true;
//                 break;
//             }
//         } while (next_permutation(a.begin(), a.end()));

//         if (!found) cout << "NO\n";
//     }

//     return 0;
// }



int main(){
    int t;
    cin >> t;
    while(t--){
        long long n;
        cin >> n;
        long long a[n];
        for(int i=0;i<n;i++) cin >> a[i];
        
        sort(a, a + n);
        long long mx = a[n - 1];
        long long mn = a[0];

        if(mx == mn) cout << "NO"<<endl;
        else{
            cout << "YES"<<endl;
            cout << mx << " ";
            for(int i=0;i<n-1;i++) cout << a[i] << " ";
            cout <<endl;
        }
    }
    return 0;
}
