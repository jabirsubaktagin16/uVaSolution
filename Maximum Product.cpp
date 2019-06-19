#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long int n,cs=1;
    while(scanf("%lld",&n)!=EOF)
    {
        long long int arr[n+1];
        long long int maximum=0;
        long long int product=1;
        for(long long int i=0; i<n; i++)
        {
            cin>>arr[i];
        }
        for(long long int i=0; i<n; i++)
        {
            product=1;
            for(long long int j=i; j<n; j++)
            {
                product*=arr[j];
                maximum=max(maximum,product);
            }
        }
        printf("Case #%lld: The maximum product is %lld.\n\n", cs, maximum);
        cs++;
    }
    return 0;
}
