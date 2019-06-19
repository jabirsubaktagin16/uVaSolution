#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,cnt,arr[30],x,y;
    cout<<"Lumberjacks:"<<endl;
    while(cin>>n)
    {
        while(n--)
        {
            for(int i=0; i<10; i++)
                cin>>arr[i];
            x=arr[0];
            y=arr[1];
            if(x>y)
            {
                cnt=0;
                for(int i=0; i<9; i++)
                {
                    if(arr[i]>arr[i+1])
                        cnt++;
                }
            }
            else if(x<y)
            {
                cnt=0;
                for(int i=0; i<9; i++)
                {
                    if(arr[i]<arr[i+1])
                        cnt++;
                }
            }
            if(cnt==9)
                cout<<"Ordered"<<endl;
            else
                cout<<"Unordered"<<endl;
        }

    }
    return 0;
}
