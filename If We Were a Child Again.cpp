#include<bits/stdc++.h>
using namespace std;

void div(char ch[],long long int n)
{
    long long int rem=0,i,j=0;
    char a[100000];
    int res=1;
    for(i=0; i<strlen(ch); i++)
    {
        rem=ch[i]-'0'+rem*10;
        if(rem/n!=0)
            res=0;
        if(!res)
            cout<<rem/n;
        rem=rem%n;
    }
    if(res)
        cout<<"0";
}
int rem(char ch[],long long int n)
{
    long long int i,rem=0,j;
    for(i=0; i<strlen(ch); i++)
    {
        rem=ch[i]-'0'+rem*10;
        rem=rem%n;
    }
    return rem;
}
int main()
{
    char ch[100000],t;
    long long int n;
    while(cin>>ch>>t>>n)
    {
        if(t=='/')
        {
            div(ch,n);
            cout<<'\n';
        }
        else
        {
            cout<<rem(ch,n)<<'\n';
        }
    }
    return 0;
}
