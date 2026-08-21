#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    string n;
    cin>>n;
    
    int count = 0;
    for(char ch : n) {
        if(ch == '4' || ch == '7'){
            count++;
        }
    }    
    if(count == 4 || count == 7) cout << "YES"  << endl;
    else cout << "NO" << endl;
    return 0;
}
