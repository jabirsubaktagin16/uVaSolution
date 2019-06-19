#include <bits/stdc++.h>
using namespace std;

int main() {
    int T, i = 1;
    cin>>T;
    while (T--) {
        int dd, mm, yy, Y;
        cin>>dd>>mm>>yy>>Y;
        cout<<"Case "<<i<<": ";
        if (dd != 29 || mm != 2) {
            cout<<Y-yy<<endl;
        } else {
            int c1 = Y/4 - Y/100 + Y/400;
            int c2 = yy/4 - yy/100 + yy/400;
            cout<<c1-c2<<endl;
        }
        i++;
    }
    return 0;
}
