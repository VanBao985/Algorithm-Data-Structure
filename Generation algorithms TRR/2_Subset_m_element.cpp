#include<iostream>

using namespace std;

bool subsetEnd(int b[], int m, int a[], int n)
{
    for (int i = 1; i <= m; i++)
    {
        if (b[m-i]<n-i)
        {
            return false;
        }
    }
    return true;   
}

void subset(int b[], int m, int a[], int n)
{
    for (int i = 0; i < m; i++)
    {
        cout << a[b[i]] << " ";
    }
    cout << endl;
    for (int i = 1; i <= m; i++)
    {
        if (b[m-i]<n-i)
        {
            b[m-i]= b[m-i]+1;
            int value = b[m-i];
            int index = i;
            i--;
            while (i)
            {
                b[m-i]=value + index - i;
                i--;
            }
        break;
        }
    }
}

void quickSort(int a[], int l, int r)
{
    int p = a[(int)(l+r)/2];
    int i=l;
    int j=r;
    while (i<j)
    {
        while(a[i]<p)
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

int a[100001], b[100001];
int main()
{
    int n, m;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    quickSort(a, 0, n-1);
    cin >> m;
    for (int i = 0; i < m; i++)
    {
        b[i]=i;
    }
    while(!subsetEnd(b, m ,a, n))
    {
        subset(b, m , a, n);
    }
    subset(b, m , a, n);
}
