#include<iostream>

using namespace std;

int count =0;
 
void dem(int n, int k)
{
    if (k==0)
    {
        count ++;
    }
    else 
    {
        dem(2*n, k-1);
        if ((n-1)%3==0 && ((n-1)/3)%2)
        dem ((n-1)/3, k-1);
    }
}

int main()
{
    int n, k;
    cin >> n >> k;
    dem(n,k);
    cout << count;
}