#include<bits/stdc++.h>
using namespace std;
int main()
{
    int c;
    bool w;
    char a[1000];
    while(gets(a))
    {
        c=0;
        w=true;
        for(int i=0; a[i]; i++)
        {
            if((a[i]>='A'&&a[i]<='Z')||(a[i]>='a'&&a[i]<='z'))
            {
                if(w)
                    c++;
                w=false;
            }
            else
                w=true;
        }
        cout<<c<<endl;
    }
    return 0;
}
