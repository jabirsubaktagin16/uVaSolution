#include<bits/stdc++.h>
using namespace std;

int main()
{
    string st1,st2;
    while(cin>>st1>>st2)
    {
        int cnt=0;
        for(int i=0;i<st2.length() && cnt<st1.length();i++)
        {
            if(st2[i]==st1[cnt])
                cnt++;
        }
        if(cnt==st1.length())
            cout<<"Yes"<<endl;
        else
            cout<<"No"<<endl;
    }
    return 0;
}
