#include<iostream>

using namespace std;

//sap xep nhanh Quick_sort

void quickSort(int a[], int l, int r)
{
    int p = a[(l+r)/2];
    int i = l; 
    int j= r;
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
        if(i<=j)
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

void solve(int a[], int n)
{
    int solve = 0;
    for (int i = 0; i < n; i++)
    {
        if (a[i]== solve)
        {
            solve++;
        }
    }
    cout << solve;
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
    solve(a, n);
    return 0;
}