#include<bits/stdc++.h>

using namespace std;

int n,x;
int *a= new int[n]; //cap phat dong cho mang

int index()
{
    for (int i = 0; i < n; i++)
    {
        if (x==a[i]) return i;
    }
    return -1;
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
    cin >> x;
    cout << index();
    
}

