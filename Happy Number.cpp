#include <bits/stdc++.h>
using namespace std;

int numSquareSum(int n)
{
    int squareSum = 0;
    while (n)
    {
        squareSum += pow((n % 10),2);
        n /= 10;
    }
    return squareSum;
}
bool isHappynumber(int n)
{
    int slow, fast;
    slow = fast = n;
    do
    {
        slow = numSquareSum(slow);
        fast = numSquareSum(numSquareSum(fast));

    }
    while (slow != fast);

    return (slow == 1);
}

int main()
{
    int T,n,i=1;
    cin>>T;
    while(T--)
    {
        cin>>n;
        if (isHappynumber(n))
            cout <<"Case #"<<i<<": "<<n<<" is a Happy number."<<endl;
        else
            cout <<"Case #"<<i<<": "<<n<<" is an Unhappy number."<<endl;
            i++;
    }
    return 0;
}
