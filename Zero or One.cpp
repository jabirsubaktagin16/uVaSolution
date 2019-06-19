#include<bits/stdc++.h>
using namespace std;

int main()
{
    int A,B,C;
    while(scanf("%d %d %d", &A, &B, &C)!=EOF)
    {
        if(A==B && B==C)
            cout<<"*"<<endl;
        else if(A==B)
            cout<<"C"<<endl;
        else if(B==C)
            cout<<"A"<<endl;
        else
            cout<<"B"<<endl;
    }
    return 0;
}
