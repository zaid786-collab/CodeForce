#include <bits/stdc++.h>
using namespace std;
 
int main() {
    string a,b;
    cin >> a >> b;
 
    string ans = "";
 
    for(int i=0;i<a.length();i++) {
        ans += (a[i] != b[i]) ?  '1' : '0';
    }
cout << ans << endl;
return 0;

}