#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long int n,sum,num;
    char ch[100];
    while(cin>>ch)
    {
        sum=0;
        n=strlen(ch);
        for(int i=0;i<n;i++)
        {
            num=ch[i]-'0';
            sum+=num*(pow(2,n-i)-1);
        }
        if(sum==0)
            break;
        cout<<sum<<endl;
    }
    return 0;
}
