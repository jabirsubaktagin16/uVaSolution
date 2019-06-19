#include<bits/stdc++.h>
using namespace std;

int main()
{
    int T;
    cin>>T;
    while(T--)
    {
        int s,d,a=0,b=0;
        cin>>s>>d;
        a=s+d;
        b=s-d;
        if(a<0||b<0||a%2==1||b%2==1)
            cout<<"impossible"<<endl;
        else
            cout<<a/2<<" "<<b/2<<endl;
    }
    return 0;
}
