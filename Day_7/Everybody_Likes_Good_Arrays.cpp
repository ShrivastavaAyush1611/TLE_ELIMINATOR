#include<iostream>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        long long n;
        cin >> n;
        long long a[n];
        for(int i=0;i<n;i++) cin >> a[i];

        long long ops = 0;
        for(int i=0;i<n-1;i++){
            if((a[i]%2) == (a[i+1]%2)) ops++;
        }
        cout << ops << endl;
    }
    return 0;
}
