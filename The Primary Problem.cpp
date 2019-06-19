#include<bits/stdc++.h>
using namespace std;
#define N 1000005
bool status[N];
void sieve(void)
{
    int i, j, add;
    status[0] = status[1] = 1;
    for(i = 4; i < N; i+=2)
        status[i] = 1;
    for(i = 3; i < N; i+=2)
    {
        if(!status[i])
        {
            if(N/i >= i)
            {
                add = i * 2;
                for(j = i * i; j < N; j += add)
                    status[j] = 1;
            }
        }
    }
    return;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0), cout.tie(0);
    sieve();
    int n,i;
    while(cin>>n)
    {
        if(n==0)
            break;
        for(i=2; i<n; i++)
        {
            if(!status[i] && !status[n-i])
            {
                cout<<n<<":"<<'\n'<<i<<"+"<<n-i<<'\n';
                break;
            }
        }
        if(i==n)
            cout<<n<<":"<<'\n'<<"NO WAY!"<<'\n';
    }
    return 0;
}

