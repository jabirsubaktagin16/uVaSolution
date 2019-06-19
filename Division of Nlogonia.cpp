#include<bits/stdc++.h>
using namespace std;

int main()
{
    int K,N,M,X,Y;
    while(scanf("%d",&K)!=EOF)
    {
        if(K==0)
            break;
        cin>>N>>M;
        while(K--)
        {
            cin>>X>>Y;
            if(X==N||Y==M)
                cout<<"divisa"<<endl;
            else if(X>N && Y>M)
                cout<<"NE"<<endl;
            else if(X<N && Y>M)
                cout<<"NO"<<endl;
            else if(X<N && Y<M)
                cout<<"SO"<<endl;
            else if(X>N && Y<M)
                cout<<"SE"<<endl;
        }
    }
    return 0;
}
