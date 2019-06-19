#include<bits/stdc++.h>
using namespace std;

int bubbleSort(int arr[], int n)
{
    int i, j,cnt=0;
    for (i = 0; i < n-1; i++)
    {
        for (j = 0; j < n-i-1; j++)
        {
            if (arr[j] > arr[j+1])
            {
                swap(arr[j], arr[j+1]);
                cnt++;
            }
        }
    }
    return cnt;
}
int main()
{
    int N;
    while(cin>>N)
    {
        int arr[N];
        for(int i=0;i<N;i++)
            cin>>arr[i];
        cout<<"Minimum exchange operations : "<<bubbleSort(arr,N)<<endl;
    }
    return 0;
}
