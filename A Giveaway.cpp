#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    while(scanf("%d", &n) == 1 && n)
    {
        long long int a=pow(n,0.5);
        long long int b=pow(n,0.3);
        while(a*a < n)
            a++;
        while(b*b*b < n)
            b++;
        if(a*a == n && b*b*b == n)
            cout<<"Special"<<endl;
        else
            cout<<"Ordinary"<<endl;
    }
    return 0;
}
