#include<bits/stdc++.h>

using namespace std;

int i, m, n, S;
int cnt;

void test(int k, int last)
{
    for (int i = last+1; i < m; i++)
    {
        S+=i;
        if (k==n)
        {
            if (S==m)
            {
                cnt++;
            }
        }
        else test(k+1,i);
        S-=i;
    }
}

int main()
{
    cnt=0;
    n=4, m=20, S=0;
    test(1,0);
    cout << cnt;
}