#include<bits/stdc++.h>
using namespace std;

int main()
{
    int T;
    cin>>T;
    while(T--)
    {
        int s=INT_MAX;
        int sum;
        int r;
        cin>>r;
        int arr[r];
        for(int i=0; i<r; i++)
            cin>>arr[i];
        sort(arr,arr+r);
        for(int j=0;j<r;j++)
        {
            sum=0;
            for(int k=0;k<r;k++)
            {
                sum+=abs(arr[j]-arr[k]);
            }
            if(sum<s)
                s=sum;
        }
        cout<<s<<endl;
    }
    return 0;
}
