#include<bits/stdc++.h>
using namespace std;

int arr[123];
int N,P;
bool dayOff(int n)
{
    for(int i=0;i<P;i++)
    {
        if(n%arr[i]==0)
            return true;
    }
    return false;
}
int main()
{
    int T;
    cin>>T;
    while(T--)
    {
        int cnt=0;
        cin>>N>>P;
        for(int i=0;i<P;i++)
            cin>>arr[i];
        for(int i=1;i<=N;i++)
        {
            if(i%7!=6 && i%7!=0 && dayOff(i))
                ++cnt;
        }
        cout<<cnt<<endl;
    }
    return 0;
}
