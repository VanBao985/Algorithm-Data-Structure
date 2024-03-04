#include<bits/stdc++.h>

using namespace std;

int n,k;
int *a= new int[n];

int searchMin()
{
    int k = 0;
    for (int i = 0; i < n; i++)
    {
        if (a[i]<a[k]) 
        k=i;
    }
    return k;
}

int searchMax()
{
    int k = 0;
    for (int i = 0; i < n; i++)
    {
        if (a[i]>=a[k]) 
        k=i;
    }
    return k;
}

void solve()
{
    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }
    cout << endl;
    
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    int temp=a[searchMax()];
    a[searchMax()]=a[searchMin()];
    a[searchMin()]=temp;
    solve();
    return 0;
}

