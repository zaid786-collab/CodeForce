#include<bits/stdc++.h>
using namespace std;

int main () {
    int n;
    cin>>n;

    vector<int> soldirs(n);
    int mx = 0,mn = 0;

    for(int i=0;i<n;i++) {
        cin>>soldirs[i];

        if(soldirs[mx] < soldirs[i]) {
            mx = i;
        }

        if(soldirs[mn] >= soldirs[i]) {
            mn = i;
        }
    }

    int steps = mx + (n - mn) - 1;

    if(mx > mn) {
        steps--;
    }

    cout << steps << endl;

    return 0;
}