#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,a,b,i=1;
    while(scanf("%d",&n)!=EOF)
    {
        if(n<=0)
            break;
        a=0;
        b=1;
        while(b<n){
            b *= 2;
            a+=1;
        }
        cout<<"Case "<<i<<": "<<a<<endl;
        i++;
    }
    return 0;
}
