#include<bits/stdc++.h>
using namespace std;

long int ReverseNum(long int n){
    long int r = 0;
    while(n > 0){
        r = (r*10) + (n%10);
        n /= 10;
    }
    return r;
}
bool IsPrime(long int n){
    int x = sqrt(n);
    for(int i = 2; i <= x; i++){
        if(n%i == 0) return false;
    }
    return true;
}
int main(){
    long int n,temp;
    bool res1,res2;
    while(cin>>n){
        res2 = res1 = false;
        res1 = IsPrime(n);
        temp = ReverseNum(n);
        if(n != temp) res2 = IsPrime(temp);
        if(res2 && res1)
            cout << n << " is emirp.\n";
        else if(res1)
            cout << n << " is prime.\n";
        else cout << n << " is not prime.\n";
    }
    return 0;
}
