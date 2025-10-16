#include<iostream>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int x1, y1, x2, y2;
        cin >> x1 >> y1 >> x2 >> y2;
        
        if(y2 < y1){ 
            cout << -1 << endl; 
            continue; 
        }

        int moves = y2 - y1;
        x1 += moves;

        if(x1 < x2){ 
            cout << -1 << endl; 
            continue; 
        }

        moves += (x1 - x2);
        cout << moves << endl;
    }
    return 0;
}
