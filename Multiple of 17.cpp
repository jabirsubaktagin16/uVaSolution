#include<bits/stdc++.h>
using namespace std;

int main()
{
    string st;
    int sum,reminder;
    while(cin>>st)
    {
        sum=0;
        reminder=0;
        int l=st.length();
        if(l==1 && st[0]=='0')
            break;
        for(int i=0;i<l;i++)
        {
            sum=reminder*10+(st[i]-'0');
            reminder=sum%17;
        }
        if(reminder==0)
            cout<<"1"<<endl;
        else
            cout<<"0"<<endl;
    }
    return 0;
}
