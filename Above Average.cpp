#include<bits/stdc++.h>
using namespace std;

int main()
{
    int T,n;
    int arr[1001];
    int total,nabv;
    double average;
    cin>>T;
    while(T--)
    {
        cin>>n;
        total=0;
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
            total+=arr[i];
        }
        average=(double) total/ (double) n;
        nabv=0;
        for(int i=0;i<n;i++)
        {
            if(arr[i]>average)
                nabv++;
        }
        printf("%.3lf%%\n",(double) nabv/(double) n * 100.0);
    }
    return 0;
}
