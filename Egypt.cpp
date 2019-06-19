#include<bits/stdc++.h>
using namespace std;
int main()
{
    int A,B,C;
    while(scanf("%d %d %d", &A, &B, &C)!=EOF)
    {
        if(A==0 && B==0 & C==0)
            break;
        else if(C*C==A*A+B*B)
            cout<<"right"<<endl;
        else if(B*B==A*A+C*C)
            cout<<"right"<<endl;
        else if(A*A==C*C+B*B)
            cout<<"right"<<endl;
        else
            cout<<"wrong"<<endl;
    }
    return 0;
}
