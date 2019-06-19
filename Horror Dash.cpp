#include<bits/stdc++.h>
using namespace std;

int main()
{
    int T,c=1;
    cin>>T;
    while(T--)
    {
        long long int N,maximum=0;
        cin>>N;
        long long int arr[N];
        for(int i=0;i<N;i++)
        {
            cin>>arr[i];
            if(arr[i]>maximum)
                maximum=arr[i];
        }
        cout<<"Case "<<c<<": "<<maximum<<endl;
        c++;
    }
    return 0;
}
