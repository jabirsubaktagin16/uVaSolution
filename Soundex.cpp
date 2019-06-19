#include<bits/stdc++.h>
using namespace std;

int main()
{
    string st;
    int cnt1,cnt2;
    while(cin>>st)
    {
        cnt1=-1;
        for(int i=0;i<st.length();i++)
        {
            if(st.at(i)=='B'||st.at(i)=='F'||st.at(i)=='P'||st.at(i)=='V')
                cnt2=1;
            else if(st.at(i)=='C'||st.at(i)=='G'||st.at(i)=='J'||st.at(i)=='K'||
                    st.at(i)=='Q'||st.at(i)=='S'||st.at(i)=='X'||st.at(i)=='Z')
                cnt2=2;
            else if(st.at(i)=='D'||st.at(i)=='T')
                cnt2=3;
            else if(st.at(i)=='L')
                cnt2=4;
            else if(st.at(i)=='M'||st.at(i)=='N')
                cnt2=5;
            else if(st.at(i)=='R')
                cnt2=6;
            else cnt2=-1;
            if(cnt2!=cnt1 && cnt2!=-1)
                cout<<cnt2;
            cnt1=cnt2;
        }
        cout<<endl;
    }
    return 0;
}
