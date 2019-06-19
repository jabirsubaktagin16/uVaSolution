#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,cs=1;
    while(scanf("%d",&n),n){
        int sum=0,a;
        for(int i=0;i<n;i++)
        {
            cin>>a;
            if(a>0)
                sum++;
            else
                sum--;
        }
        cout<<"Case "<<cs<<": "<<sum<<endl;
        cs++;
    }
    return 0;
}
