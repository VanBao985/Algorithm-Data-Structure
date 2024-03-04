#include<bits/stdc++.h>

using namespace  std;

void quickSort(int a[], int l, int r)
{
    int p = a[(r+l)/2];
    int i=l;
    int j=r;
    while (i<j)
    {
        while (a[i]<p)
        {
            i++;
        }
        while (a[j]>p)
        {
            j--;
        }
        if (i<=j)
        {
            int temp = a[i];
            a[i]=a[j];
            a[j]=temp;
            i++;
            j--;
        }
    }
    if (l<j)
    {
        quickSort(a, l, j);
    }
    if (i<r)
    {
        quickSort(a, i, r);    
    }
}

void printArray(int a[], int n)
{
    for (int  i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }
    cout << endl;
}

int a[100001];
int main()
{
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    int n; 
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    quickSort(a, 0, n-1);
    printArray(a, n);
    return 0;
}