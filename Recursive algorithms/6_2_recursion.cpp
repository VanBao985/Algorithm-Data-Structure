#include<iostream>

using namespace std;

long long exponential (int a, int b)
{
    if (b==0) return 1;
    else 
    return a * exponential(a, b-1);
}

int main()
{
    int a, b;
    cin >> a >> b;
    cout << exponential(a, b);
    return 0;
}