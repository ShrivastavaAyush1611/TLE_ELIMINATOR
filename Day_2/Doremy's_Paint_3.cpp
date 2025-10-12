#include <iostream>
#include <vector>
#include <unordered_map>
#include <cmath>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> arr(n);
        for (int i = 0; i < n; i++) cin >> arr[i];

        unordered_map<int, int> mp;
        for (int x : arr) mp[x]++;

        if (mp.size() >= 3) {
            cout << "No" << endl;
            continue;
        }

        if (mp.size() == 1) {
            cout << "Yes" << endl; 
            continue;
        }

       
        auto it = mp.begin();
        int freq1 = it->second;
        it++;
        int freq2 = it->second;

        if (freq1 == freq2) {
            cout << "Yes" << endl; 
        } else if (n % 2 == 1 && abs(freq1 - freq2) == 1) {
            cout << "Yes" << endl;
        } else {
            cout << "No" << endl;
        }
    }
    return 0;
}
