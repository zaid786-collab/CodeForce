#include<bits/stdc++.h>
using namespace std;

int main () {
    int t;
    cin>>t;
    int n = t;

    double sum = 0;

    while(t--) {
        int x;
        cin>>x;

        sum += x;
    }

    cout << sum / n << endl;

    return 0;
}