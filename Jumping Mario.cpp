#include<bits/stdc++.h>
using namespace std;

int main()
{
    int T,cs=1;
    cin>>T;
    while(T--)
    {
        int n,highjump=0,lowjump=0;
        cin>>n;
        int arr[n];
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
        }
        for(int i=1;i<n;i++)
        {
            if(arr[i]>arr[i-1])
                highjump++;
            else if(arr[i]<arr[i-1])
                lowjump++;
        }
        cout<<"Case "<<cs<<": "<<highjump<<" "<<lowjump<<endl;
        cs++;
    }
    return 0;
}
