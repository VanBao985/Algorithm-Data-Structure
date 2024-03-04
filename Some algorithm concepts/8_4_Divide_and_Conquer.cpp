#include<iostream>

using namespace std;

int Devide(int a[], int l, int r, int x)
{
    if (l == r)  
    {
        if (a[l]==x) return 1;
        else return 0;
    }
    else
    {
        int m = (l+r)/2;
        return Devide(a, l, m , x) + Devide(a, m+1, r, x);
    }
}

int a[100001];
int main()
{
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    int x;
    cin >> x;
    cout << Devide(a, 0, n-1, x);
    return 0;
}