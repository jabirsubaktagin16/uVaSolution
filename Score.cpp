#include<bits/stdc++.h>
using namespace std;

int main()
{
    int T;
    string st;
    cin>>T;
    while(T--)
    {
        cin>>st;
        int cnt=0;
        int x=1;
        int l=st.length();
        for(int i=0; i<l; ++i)
        {
            if(st[i]=='O')
            {
                cnt+=x;
                if(i+1<l && st[i+1]=='O')
                    x++;
                else
                    x=1;
            }
        }
        cout<<cnt<<endl;
    }
    return 0;
}
