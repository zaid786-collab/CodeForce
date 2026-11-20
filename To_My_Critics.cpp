#include<bits/stdc++.h>
using namespace std;

int main () {
    int t;
    cin>>t;

    while(t--) {
        int a,b,c;
        cin>>a>>b>>c;

        int mx = max(a+b, max(a+c,b+c));

        if(mx >= 10) {
            cout << "YES" << endl;
        } else {
            cout << "No" << endl;
        }

    }

    return 0;
}