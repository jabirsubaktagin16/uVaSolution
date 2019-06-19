#include <bits/stdc++.h>
using namespace std;

int main()
{
    int T;
    string ch;
    cin >> T;
    while (T--)
    {
        cin >> ch;
        if (ch.length() == 5)
            cout << "3"<<endl;
        else
        {
            int one(0);
            if (ch[0] == 'o')
                ++one;
            if (ch[1] == 'n')
                ++one;
            if (ch[2] == 'e')
                ++one;
            if (one >= 2)
                cout << "1"<<endl;
            else
                cout << "2"<<endl;

        }
    }
    return 0;
}
