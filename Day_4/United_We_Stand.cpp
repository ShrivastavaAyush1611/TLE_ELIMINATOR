#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;
        vector<int> arr(n);
        for (int i = 0; i < n; i++) cin >> arr[i];
        sort(arr.begin(), arr.end());
        vector<int> b, c;
        int min_val = arr[0];
        for (int i = 0; i < n; i++) {
            if (arr[i] == min_val) b.push_back(arr[i]);
            else c.push_back(arr[i]);
        }
        if (c.empty()) {
            cout << -1 << endl;
        } else {
            cout << b.size() << " " << c.size() << endl;
            for (int x : b) cout << x << " ";
            cout << endl;
            for (int x : c) cout << x << " ";
            cout << endl;
        }
    }
    return 0;
}