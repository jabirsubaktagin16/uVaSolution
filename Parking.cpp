#include<bits/stdc++.h>
using namespace std;

int main()
{
    int T,n;
    cin>>T;
    while(T--)
    {
        int minimum=INT_MAX;
        int maximum=-1;
        cin>>n;
        int arr[n+1];
        for(int i=0; i<n; i++)
        {
            cin>>arr[i];
            maximum=max(maximum,arr[i]);
            minimum=min(minimum,arr[i]);
        }
        cout<<2*(maximum-minimum)<<endl;
    }
    return 0;
}
