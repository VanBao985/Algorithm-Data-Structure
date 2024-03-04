#include<iostream>
#include<math.h>

using namespace std;

void quickSort(int a[], int l, int r)
{
    int p=a[(l+r)/2];
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
            int temp=a[i];
            a[i]=a[j];
            a[j]=temp;
            i++;
            j--;
        }       
    }
    if (i<r)
    {
        quickSort(a, i, r);
    }
    if (j>l)
    {
        quickSort(a, l, j);
    }
}

bool check(int n)
{
    int k = (int)sqrt(n);
    return k*k==n;
}

void result(int a[], int n)
{
    int count=0;
    for (int i = 0; i < n; i++)
    {
        if (check(a[i]) && a[i]!=a[i+1])
        {
            cout << a[i] << " ";
            count++;
        }
    }
    if (count==0)
    {
        cout << "NULL";
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
    quickSort(a, 0, n-1);
    result(a, n);
}