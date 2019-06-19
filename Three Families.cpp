#include<bits/stdc++.h>
using namespace std;

int main()
{
    int T,a,b,c;
    cin>>T;
    while(T--)
    {
        int pay=0;
        cin>>a>>b>>c;
        pay=c*(a+(a-b))/(a+b);
        if(pay<=0)
            cout<<"0"<<endl;
        else
            cout<<pay<<endl;
    }
    return 0;
}
