#include<iostream>

using namespace std;

void printArrray(int a[], int l, int r)
{
    for (int i = l; i < r; i++)
    {
        cout << a[i] << " ";
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
    int L[n];
    L[0]=1;
    for (int i = 1; i < n; i++)
    {
        if (a[i]>=a[i-1])
        {
            L[i]=L[i-1]+1;
        }
        else
        {
            L[i]=1;
        }
    }
    int indexmax=0;
    for (int i = 0; i < n; i++)
    {
        if (L[i]>L[indexmax])
        {
            indexmax = i;
        }
    }
    printArrray(a, indexmax - L[indexmax]+1, indexmax+1);
}