#include<bits/stdc++.h>
using namespace std;

int main()
{
    int T;
    cin>>T;
    while(T--)
    {
        long long int n=0,res=0,rem=0;
        cin>>n;
        res=(((((n*567)/9)+7492)*235)/47)-498;
        res/=10;
        rem=res%10;
        cout<<abs(rem)<<endl;
    }
    return 0;
}
