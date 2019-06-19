#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long int a,b,rem1,rem2;
    while(cin>>a>>b)
    {
        if(a==0 & b==0)
            break;
        int sum=0,carry=0,cnt=0;
        while(a||b)
        {
            sum=a%10+b%10+carry;
            carry=sum>9 ? 1:0;
            if(carry)
                cnt++;
            a=a/10;
            b=b/10;
        }
        if(cnt==0)
            cout<<"No carry operation."<<endl;
        else if(cnt==1)
            cout<<"1 carry operation."<<endl;
        else
            cout<<cnt<<" carry operations."<<endl;
    }
    return 0;
}
