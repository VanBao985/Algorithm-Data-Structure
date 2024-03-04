#include<iostream>

using namespace std;

bool binaryEnd(int a[], int n)
{
    for (int i = 0; i < n; i++)
    {
        if (!a[i])
        {
            return false;
        }
    }
    return true;
}

void binaryString(int a[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << a[i];
    }
    cout << endl;
    for (int i = n-1; i >=0 ; i--)
    {
        if (!a[i])
        {
            a[i]=1;
            i++;
            while (i<n)
            {
                a[i]=0;
                i++;
            }
            return binaryString(a,n);
        }
    }
}

int a[100001];
int main()
{
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        a[i] = 0;
    }
    do 
    {
        binaryString(a,n);
    }
    while (!binaryEnd(a,n));
    binaryString(a,n);
    return 0;
}