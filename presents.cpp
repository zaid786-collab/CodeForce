#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int t;
    cin >> t;
    int x;
    vector<int> ans(t+1);
    
    for(int i=1;i<=t;i++) {
        cin>>x;
        ans[x] = i;
    }
    
    for(int i=1;i<=t;i++) {
        cout << ans[i] << " ";
    }
    return 0;
}