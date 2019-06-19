#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0), cout.tie(0);
    int T,G,L;
    cin>>T;
    while(T--)
    {
        cin>>G>>L;
        if(L%G==0)
            cout<<G<<" "<<L<<'\n';
        else
            cout<<"-1"<<'\n';
    }
    return 0;
}
