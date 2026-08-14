#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int n,t;
    cin>>n>>t;
    
    vector<int> books(n);
    
    for(int i=0;i<n;i++){
        cin >> books[i];
    }
    
    int left = 0;
    int right = 0;
    int ans = 0;
    int tm = 0;
    
    while(right < books.size()) {
        tm += books[right];
        right++;
        
        while(tm > t) {
            tm -= books[left];
            left++;
        }
        
        ans = max(ans,right - left);
    }
    
    cout << ans << endl;
}