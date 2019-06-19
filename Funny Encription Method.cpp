#include<bits/stdc++.h>
using namespace std;

int binary(int n)
{
    int s,cnt=0;
    while(n!=0)
    {
        s=n%2;
        n=n/2;
        if(s==1)
            cnt++;
    }
    return cnt;
}
int hexadecimal(int n)
{
    int s,cnt=0;
    while(n!=0)
    {
        s=n%10;
        n=n/10;
        if(s==1||s==2||s==4||s==8)
            cnt++;
        else if(s==3||s==5||s==6||s==9)
            cnt+=2;
        else
            cnt+=3;
    }
    return cnt;
}
int main()
{
    int T,num;
    cin>>T;
    while(T--)
    {
        cin>>num;
        cout<<binary(num)<<" "<<hexadecimal(num)<<endl;
    }
    return 0;
}
