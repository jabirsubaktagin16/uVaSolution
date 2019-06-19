#include<bits/stdc++.h>
using namespace std;

int main()
{
    int T,n;
    cin>>T;
    while(T--)
    {
        cin>>n;
        int arr[n+1],cnt=0;
        for(int i=0; i<n; i++)
            cin>>arr[i];
        for (int i = 0; i < n-1; i++)
        {
            for (int j = 0; j < n-i-1; j++)
            {
                if (arr[j] > arr[j+1])
                {
                    swap(arr[j], arr[j+1]);
                    cnt++;
                }
            }
        }
        cout<<"Optimal train swapping takes "<<cnt<<" swaps."<<endl;
    }
    return 0;
}

