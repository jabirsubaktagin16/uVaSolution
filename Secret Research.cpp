#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    char st[1000];
    cin>>n;
    while(n--)
    {
        cin>>st;
        int len=strlen(st);
        if(st[len-1]=='5' && st[len-2]=='3')
            cout<<"-"<<endl;
        else if(st[0]=='1' && st[1]=='9' && st[2]=='0')
            cout<<"?"<<endl;
        else if(st[0]=='9' && st[len-1]=='4')
            cout<<"*"<<endl;
        else if((st[0]=='1' && len==1)||(st[0]=='4' && len==1)||(st[0]=='7' && st[1]=='8' && len==2))
            cout<<"+"<<endl;
    }
    return 0;
}
