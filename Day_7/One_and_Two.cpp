#include<iostream>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        long long n;
        cin >> n;
        long long a[n];
        for(long long i=0;i<n;i++) cin >> a[i];
        
        long long total=0, curr=0, ans=-1;
        for(long long i=0;i<n;i++) if(a[i]==2) total++;
        
        for(long long i=0;i<n;i++){
            if(a[i]==2) curr++;
            if(curr == total - curr){
                ans = i + 1;
                break;
            }
        }
        cout << ans <<endl;
    }
    return 0;
}

