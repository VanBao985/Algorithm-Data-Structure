#include<bits/stdc++.h>

using namespace std;

int x[100001];
int n;
int cnt;

void solution()
{
    cout << ++cnt << ": ";
    for (int i = 1; i <= n; i++)
    {
        cout << x[i];
    }
    cout << endl;
}

bool check(int k, int n)
{
    return true;
}

void Try(int k)
{
    for (int i = 0; i <= 1; i++)
    {
        if(check(k,n))
        x[k]=i;
        if (k==n)
        {
            solution();
        }
        else
        {
            Try(k+1);
        }
    }
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cin >> n;
    Try(1);
    return 0;
}