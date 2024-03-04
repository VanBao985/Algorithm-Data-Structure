#include<bits/stdc++.h>

using namespace std;

bool b[11];
int x[11];
int n;
int cnt=0;

void solution()
{
    cout << ++cnt << ": ";
    for (int i = 1; i <= n; i++)
    {
        cout << x[i];
    }
    cout << endl;
}

bool check(int k)
{
    return k;
}

void Try(int k)
{
    for (int i = 1; i <= n; i++)
    {
        if (check(b[i]))
        {
            x[k]=i;
            if (k==n)
            {
                solution();
            }
            else
            {
                b[i]=false;
                Try(k+1);
                b[i]=true;
            }   
        }        
    }    
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        b[i]=true;
    }
    Try(1);
}