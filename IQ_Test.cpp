#include<bits/stdc++.h>
using namespace std;

int main () {
    int n;
    cin>>n;

    int odd = 0,oddi = -1;
    int even = 0,eveni = -1;

    for(int i=1;i<=n;i++) {
       int x;
       if(cin >> x) {
            if(x % 2 == 0) {
                even++;
                eveni = i;
            }else {
                odd++;
                oddi = i;
            }
       }
    }

    if(even == 1) {
        cout << eveni << endl;
    }else {
        cout << oddi << endl;
    }


    return 0;
}