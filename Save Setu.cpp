#include<bits/stdc++.h>
using namespace std;

int main()
{
    int T;
    long long int n,sum=0;
    char ch[100];
    cin>>T;
    while(T--)
    {
        cin>>ch;
        if(strcmp(ch,"donate")==0)
        {
            cin>>n;
            sum+=n;
        }
        else
            cout<<sum<<endl;
    }
    return 0;
}
