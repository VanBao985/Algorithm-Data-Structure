#include<iostream>

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
        if (i<r)
        {
            quickSort(a, i, r);
        }
        if (j>l)
        {
            quickSort(a, l ,j);
        }
    }
}

void result(int a[], int n, int k)
{
    int count=1;
    for (int i = 0; i < n-1; i++)
    {
        if (a[i]+k<a[i+1])
        {
            count++;
        }
    }
    cout << count;
}

int main()
{
    int n;
    cin >> n;
    int a[100001];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    int k;
    cin >> k;
    quickSort(a, 0, n-1);
    result(a, n, k);
    
}