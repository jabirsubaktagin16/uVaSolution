#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long int N;
    while(scanf("%lld",&N)!=EOF)
    {
        if(N==0)
            break;
        else
        {
            if(N<=101)
                cout<<"f91("<<N<<") = 91"<<endl;
            else
                cout<<"f91("<<N<<") = "<<(N-10)<<endl;
        }
    }
    return 0;
}
