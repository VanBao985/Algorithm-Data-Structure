#include<iostream>

using namespace std;

long long gameGuessNumber(long long l, long long r)
{
    if (l==r) return 1;
    return 1 + gameGuessNumber((l+r)/2+1, r);
}

int main()
{
    long long n;
    cin >> n;
    cout << gameGuessNumber(1,n);
    return 0;
}