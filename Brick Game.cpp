#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,T,cs=1,p;
    cin>>T;
    while(T--)
    {
        p=0;
        cin>>n;
        long long int arr[n];
        for(int i=0; i<n; i++)
            cin>>arr[i];
        sort(arr,arr+n);
        p=n/2;
        cout<<"Case "<<cs<<": "<<arr[p]<<endl;
        cs++;
    }
    return 0;
}
