#include<bits/stdc++.h>
using namespace std;

int main()
{
    long int T,a,b,c,i=1;
    cin>>T;
    while(T--)
    {
        cin>>a>>b>>c;
        if(a<=0||b<=0||c<=0)
            cout<<"Case "<<i<<": Invalid"<<endl;
        else if(a+b<=c||b+c<=a||a+c<=b)
            cout<<"Case "<<i<<": Invalid"<<endl;
        else if((a==b)&&(b==c))
            cout<<"Case "<<i<<": Equilateral"<<endl;
        else if((a==b)||(b==c)||(c==a))
            cout<<"Case "<<i<<": Isosceles"<<endl;
        else
            cout<<"Case "<<i<<": Scalene"<<endl;
        i++;
    }
    return 0;
}
