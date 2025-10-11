#include<iostream>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        string s;
        cin>>s;
        bool three = false;
        int cnt = 0;
        for(int i=0;i<n;i++){
            if(s[i]=='.' && i+2<n && s[i+1]=='.' && s[i+2]=='.'){
                three = true;
                break;
            }
            if(s[i]=='.') cnt++;
        }
        if(three) cout<<2;
        else cout<<cnt;
    }
    return 0;
}
