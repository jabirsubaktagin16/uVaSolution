#include<bits/stdc++.h>
using namespace std;

int main()
{
    string st;
    while(cin>>st)
    {
        for(int i=0; i<st.length(); i++)
        {
            if(st[i]=='A'||st[i]=='B'||st[i]=='C')
                st[i]='2';
            if(st[i]=='D'||st[i]=='E'||st[i]=='F')
                st[i]='3';
            if(st[i]=='G'||st[i]=='H'||st[i]=='I')
                st[i]='4';
            if(st[i]=='J'||st[i]=='K'||st[i]=='L')
                st[i]='5';
            if(st[i]=='M'||st[i]=='N'||st[i]=='O')
                st[i]='6';
            if(st[i]=='P'||st[i]=='Q'||st[i]=='R'||st[i]=='S')
                st[i]='7';
            if(st[i]=='T'||st[i]=='U'||st[i]=='V')
                st[i]='8';
            if(st[i]=='W'||st[i]=='X'||st[i]=='Y'||st[i]=='Z')
                st[i]='9';
        }
        cout<<st<<endl;
    }
    return 0;
}
