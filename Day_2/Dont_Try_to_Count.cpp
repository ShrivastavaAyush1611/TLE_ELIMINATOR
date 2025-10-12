#include<iostream>
#include <string>
using namespace std;

int ans(string str1, string str2, int count){
    if(str1.find(str2) != string::npos){
        return count;
    }
    if(str1.length() > str2.length() && str1.find(str2) == string::npos){
        return -1;
    }
    return ans(str1 + str1, str2, count++);
}

int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        string str1 = "";
        char ch;
        for(int i = 0; i < n; i++){
            cin >> ch;
            str1 += ch; 
        }
        int m;
        cin >> m;
        string str2 = "";
        char ch2;
        for(int i = 0; i < m; i++){
            cin >> ch2;
            str2 += ch2; 
        }
        int count = 0;
        count = ans(str1, str2, count);
        cout <<count<<endl;
    }
    return 0;
}