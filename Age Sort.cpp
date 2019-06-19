#include<bits/stdc++.h>
using namespace std;

int main()
{
    long int n,i;
    long int arr[2000005];
    while(scanf("%ld",&n)==1)
    {
        if(n==0)
            break;
        for(i=0; i<n; i++)
            cin>>arr[i];
        sort(arr,arr+i);
        for(i=0; i<n; i++)
        {
            cout<<arr[i];
            if(i<(n-1))
                cout<<" ";
        }
        cout<<endl;
    }
    return 0;
}
