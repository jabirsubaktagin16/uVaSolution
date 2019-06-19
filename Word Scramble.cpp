#include<bits/stdc++.h>
using namespace std;

int main()
{
    char st[1000];
    while(gets(st))
    {
        int l=strlen(st);
        int b=-1;
        for(int i=0; i<l; i++)
        {
            if(st[i]==' ')
            {
                for(int j=i-1; j>b; j--)
                    cout<<st[j];
                cout<<" ";
                b=i;
            }
        }
        for(int i=l-1; i>b; i--)
            cout<<st[i];
        cout<<endl;
    }
    return 0;
}
