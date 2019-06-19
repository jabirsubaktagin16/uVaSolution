#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,cnt=0,sum,avg,ans;
    int arr[100];
    while(scanf("%d",&n)!=EOF)
    {
        if(n==0)
            break;
        sum=0;
        for(int i=0; i<n; i++)
        {
            cin>>arr[i];
            sum+=arr[i];
        }
        avg=sum/n;
        ans=0;
        for(int i=0; i<n; i++)
        {
            if(arr[i]>avg)
                ans+=arr[i]-avg;

        }
        printf("Set #%d\n",++cnt);
        printf("The minimum number of moves is %d.\n",ans);
        printf("\n");
    }
    return 0;
}
