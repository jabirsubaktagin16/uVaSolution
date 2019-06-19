#include<bits/stdc++.h>
using namespace std;

int main()
{
    char s[6];
    int i=0;
    while(scanf("%s",s)!=EOF)
    {
        if(!strcmp(s,"*"))
            break;
        else if(!strcmp(s,"Hajj"))
            cout<<"Case "<<++i<<": Hajj-e-Akbar"<<endl;
        else
            cout<<"Case "<<++i<<": Hajj-e-Asghar"<<endl;
    }
    return 0;
}
