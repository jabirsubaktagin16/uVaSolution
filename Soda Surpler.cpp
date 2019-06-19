#include <bits/stdc++.h>
using namespace std;

int main() {
    int T,e,f,c,ans;
    cin>>T;
    while(T--) {
        cin>>e>>f>>c;
        e += f;
        ans = 0;
        while(e >= c) {
            ans += e/c;
            e = e%c + e/c;
        }
        cout<<ans<<endl;
    }
    return 0;
}
