#include<iostream>
#include<vector>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int>b(n), a;
        for(int i=0;i<n;i++) cin>>b[i];
        for(int i=0;i<n;i++){
            a.push_back(b[i]);
            if(i > 0 && b[i] < b[i-1]) a.push_back(b[i]);
        }
        cout<<a.size()<<endl;
        for(int x:a) cout<<x<<" ";
        cout<<endl;
    }
    return 0;
}
