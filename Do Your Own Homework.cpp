#include<bits/stdc++.h>
using namespace std;

int main()
{
    int T,n,i,cases=0;
    cin>>T;
    while(T--)
    {
        cin>>n;
        char sub [200][100],in[50];
        int D[200],d;
        for(i=0;i<n;i++)
            cin>>sub[i]>>D[i];
        cin>>d>>in;
        cout<<"Case "<<++cases<<": ";
        for(i=0;i<n;i++)
        {
            if(!strcmp(sub[i],in)){
                if(d >= D[i])
                    puts("Yesss");
                else if(d+5>=D[i])
                    puts("Late");
                else
                    puts("Do your own homework!");
                break;
            }
        }
        if(i==n)
            puts("Do your own homework!");
    }
    return 0;
}
