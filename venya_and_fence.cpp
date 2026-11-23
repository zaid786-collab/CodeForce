#include<bits/stdc++.h>
using namespace std;

int main () {
    int a,b;
    cin>>a>>b;

    int count = 0;

    while(a--) {
        int x;
        cin>>x;

        if(x > b) {
            count += 2;
        } else {
            count++;
        }
    }

    cout << count << endl;

return 0;
}