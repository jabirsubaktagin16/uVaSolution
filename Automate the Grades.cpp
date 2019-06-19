#include<bits/stdc++.h>
using namespace std;

int main()
{
    int T,cs=1;
    cin>>T;
    while(T--)
    {
        long long int t1,t2,f,a,ct1,ct2,ct3,res=0,ct=0;
        cin>>t1>>t2>>f>>a>>ct1>>ct2>>ct3;
        if(ct1<=ct2 && ct1<=ct3)
            ct=(ct2+ct3)/2;
        else if(ct2<=ct1 && ct2<=ct3)
            ct=(ct1+ct3)/2;
        else if(ct3<=ct1 && ct3<=ct2)
            ct=(ct1+ct2)/2;
        res=t1+t2+f+a+ct;
        cout<<"Case "<<cs<<": ";
        if(res>=90)
            cout<<"A"<<endl;
        else if(res>=80)
            cout<<"B"<<endl;
        else if(res>=70)
            cout<<"C"<<endl;
        else if(res>=60)
            cout<<"D"<<endl;
        else if(res<60)
            cout<<"F"<<endl;
        cs++;
    }
    return 0;
}
