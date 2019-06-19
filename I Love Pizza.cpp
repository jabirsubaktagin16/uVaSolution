#include<bits/stdc++.h>
using namespace std;


int main()
{
    string s;
    int T,cnt;
    int cntM, cntA, cntR, cntG, cntI, cntT;
    cin>>T;
    while(T--)
    {
        cin >> s;
        cntM = cntA = cntR = cntG = cntI = cntT =0;
        for(int i=0; i<s.length(); i++)
        {
            if(s[i]=='M')
            {
                cntM++;
            }
            if(s[i]=='A')
            {
                cntA++;
            }
            if(s[i]=='R')
            {
                cntR++;
            }
            if(s[i]=='G')
            {
                cntG++;
            }
            if(s[i]=='I')
            {
                cntI++;
            }
            if(s[i]=='T')
            {
                cntT++;
            }
        }
        cnt=0;
        while(1)
        {
            if(cntA>=3 && cntR>=2 && cntG>=1 && cntI>=1 && cntT>=1 && cntM>=1)
            {
                cnt=cnt+1;
                cntA=cntA-3;
                cntR=cntR-2;
                cntG=cntG-1;
                cntI=cntI-1;
                cntT=cntT-1;
                cntM=cntM-1;
            }
            else
            {
                break;
            }
        }
        cout<<cnt<<endl;
    }
    return 0;
}
