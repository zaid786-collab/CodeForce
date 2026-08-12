#include<bits/stdc++.h>
using namespace std;

int main () {
    int t;
    cin>>t;

    while(t--) {
        int n,k;
        cin>>n>>k;

        vector<char> arr(n);
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }

        int left = 0;
        int right = 0;

        int mx = INT_MAX;
        int ans = 0;

        while(right < n){
            if(arr[right] == 'W'){
                ans++;
            }
            right++;
            
            if(right - left == k){
                mx = min(mx,ans);

                if(arr[left] == 'W'){
                    ans--;
                }

                left++;
            }
        }

        cout << mx << endl;
    }
    return 0;
}