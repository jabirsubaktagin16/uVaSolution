#include<bits/stdc++.h>
using namespace std;

int main()
{
    string st;
    int cnt=0,flag;
    while(cin>>st)
    {
        flag=0;
        cnt=0;
        int x=st.length();
        for(int i=0; i<x; i++)
        {
            if(st[i]>='a' && st[i]<='z')
                cnt+=st[i]-'a'+1;
            else if(st[i]>='A' && st[i]<='Z')
                cnt+=st[i]-'A'+27;
        }
        for(int i=2; i<=cnt/2; i++)
        {
            if(cnt%i==0)
                flag=1;
        }
        if(flag==0)
            cout<<"It is a prime word."<<endl;
        else
            cout<<"It is not a prime word."<<endl;
    }
    return 0;
}
