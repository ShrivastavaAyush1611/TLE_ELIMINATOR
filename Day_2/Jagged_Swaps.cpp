#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

bool compare(vector<int>Sarr, vector<int>& arr){  
    int n = arr.size();
    for(int k = 0; k < n; k++){  
        for(int i=1;i<n-1;i++){
            if(arr[i-1] < arr[i] && arr[i] > arr[i+1])
                swap(arr[i],arr[i+1]);
        }
    }
    return Sarr == arr;  
}

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int>arr(n);
        for(int i=0;i<n;i++){
            int x;
            cin>>x;
            arr[i] = x;
        }
        vector<int>Sarr = arr;
        sort(Sarr.begin(), Sarr.end());
        if(compare(Sarr,arr)){
            cout<<"YES"<<endl;  
        }else cout<<"NO"<<endl;
    }
    return 0;
}
