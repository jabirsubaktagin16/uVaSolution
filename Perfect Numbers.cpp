#include<bits/stdc++.h>
using namespace std;
bool prime(int n)
{
    int i;
    if(n==1)
        return false;
    if(n==2)
        return true;
    if(n%2==0)
        return false;
    for(i=3; i<=sqrt(n); i+=2)
    {
        if(n%i==0)
            return false;
    }
    return true;
}
int main()
{
    int T;
    int n,x;
    scanf("%d",&T);
    while(T--)
    {
        scanf("%d,",&n);
        if(prime(n))
        {
            x=pow(2,n)-1;
            if(prime(x))
                printf("Yes\n");
            else
                printf("No\n");
        }
        else
            printf("No\n");
    }
    return 0;
}
