#include<bits/stdc++.h>
using namespace std;

int main()
{
    char st[200];
    int T,sum,cs=1;
    cin>>T;
    getchar();
    while(T--)
    {
        gets(st);
        sum=0;
        for(int i=0;i<strlen(st);i++)
        {
            if(st[i]=='a'||st[i]=='d'||st[i]=='g'||st[i]=='j'||st[i]=='m'||st[i]=='p'||
               st[i]=='t'||st[i]=='w'||st[i]==' ')
                sum+=1;
            else if(st[i]=='b'||st[i]=='e'||st[i]=='h'||st[i]=='k'||st[i]=='n'||st[i]=='q'||
                    st[i]=='u'||st[i]=='x')
                        sum+=2;
            else if(st[i]=='c'||st[i]=='f'||st[i]=='i'||st[i]=='l'||st[i]=='o'||st[i]=='r'||
                    st[i]=='v'||st[i]=='y')
                        sum+=3;
            else if(st[i]=='s'||st[i]=='z')
                sum+=4;
        }
        cout<<"Case #"<<cs++<<": "<<sum<<endl;
    }
    return 0;
}
