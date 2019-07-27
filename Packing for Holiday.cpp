#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a,b,c,T,i=1;
    cin>>T;
    while(T--)
    {
        cin>>a>>b>>c;
        if(a<=20 && b<=20 && c<=20)
            cout<<"Case "<<i<<": good"<<endl;
        else
            cout<<"Case "<<i<<": bad"<<endl;
        i++;
    }
    return 0;
}
