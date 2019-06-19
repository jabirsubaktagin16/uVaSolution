#include<bits/stdc++.h>
using namespace std;

int main()
{
    unsigned long int n;
    int i,cnt,binary[1000];
    while(scanf("%lu",&n)!=EOF)
    {
        if(n==0)
            break;
        i=0;
        while(n!=0)
        {
            binary[i]=n%2;
            n/=2;
            i++;
        }
        cnt=0;
        cout<<"The parity of ";
        for(i=i-1;i>=0;i--)
        {
            cout<<binary[i];
            if(binary[i]==1)
                cnt++;
        }
        cout<<" is "<<cnt<<" (mod 2)."<<endl;
    }
    return 0;
}
