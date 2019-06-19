#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,flag=0;
    cin>>n;
    char st[1000];
    getchar();
    while(n--)
    {
        if(flag==1)
            cout<<endl;
        flag=1;
        while(gets(st))
        {
            if(strlen(st)==0)break;
            for(int i=0; i<strlen(st); i++)
            {
                if(st[i]=='1')
                    st[i]='I';
                if(st[i]=='2')
                    st[i]='Z';
                if(st[i]=='3')
                    st[i]='E';
                if(st[i]=='4')
                    st[i]='A';
                if(st[i]=='5')
                    st[i]='S';
                if(st[i]=='6')
                    st[i]='G';
                if(st[i]=='7')
                    st[i]='T';
                if(st[i]=='8')
                    st[i]='B';
                if(st[i]=='9')
                    st[i]='P';
                if(st[i]=='0')
                    st[i]='O';
            }
            puts(st);
        }

    }
    return 0;
}
