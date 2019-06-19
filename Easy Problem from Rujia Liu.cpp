#include<bits/stdc++.h>
#include<vector>
using namespace std;

int main()
{
    int n,m,d,k;
    vector<vector<int> > vec;
    while(cin>>n>>m)
    {
        vec.assign(1000000, vector<int>());
        for(int i=1;i<=n;i++)
        {
            cin>>d;
            vec[d].push_back(i);
        }
        for(int i=0;i<m;i++)
        {
            cin>>k>>d;
            if(k-1 < vec[d].size())
                cout<<vec[d][k-1]<<endl;
            else
                cout<<"0"<<endl;
        }
    }
    return 0;
}
