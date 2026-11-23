#include<bits/stdc++.h>
using namespace std;

int main () {
    int n,t;
    cin>>n>>t;

    string s;
    cin>>s;

    int r = s.length() - 1;

    while(t--) {

        for(int i=0;i<r;i++) {
            if(s[i] == 'B' && s[i+1] == 'G') {
                swap(s[i],s[i+1]);
                i++;
            }
        }
    }

    cout << s << endl;

    return 0;
}