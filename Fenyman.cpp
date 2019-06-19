#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    while(scanf("%d",&n)!=EOF)
    {
        if(n==0)
            break;
        else
        {
            int sum=0;
            for(int i=0; i<n; i++)
                sum+=(i+1)*(i+1);
            cout<<sum<<endl;
        }
    }
    return 0;
}
