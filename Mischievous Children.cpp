#include<bits/stdc++.h>
using namespace std;

double n[22],sum;

int main()
{
    int x,i,k,j,l;
    char word[20];
    n[1]=1;
    for(i=2;i<=20;i++)
        n[i]=i*n[i-1];
    cin>>x;
    for(i=1;i<=x;i++)
    {
        cin>>word;
        l=strlen(word);
        int cnt[26]={0};
        for(j=0;j<l;j++)
            cnt[word[j]-65]++;
        sum=1;
        for(j=0;j<26;j++)
            if(cnt[j]>1)
                sum*=n[cnt[j]];
        printf("Data set %d: %.0lf\n",i,n[l]/sum);
    }
    return 0;
}
