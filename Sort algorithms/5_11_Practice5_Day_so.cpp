#include<iostream>

using namespace std;

void quickSort(int a[], int l, int r)
{
    int p = a[(l+r)/2];
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

void printArray(int a[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }
    cout << endl;
}

int main()
{
    int n;
    cin >> n;
    int a[100001], b[100001], c[100001];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    int j=0, k =0;
    for (int i = 0; i < n; i++)
    {
        if (a[i]<0)
        {
            b[j]=a[i];
            j++;
        }
        else
        {
            if (a[i]>0)
            {
                c[k]=a[i];
                k++;
            }
        }    
    }
    quickSort(b, 0, j-1);
    quickSort(c, 0, k-1);
    k=0;
    j--;
    for (int i = 0; i < n; i++)
    {
        if (a[i]<0)
        {
            a[i]=b[j];
            j--;
        }
        else
        {
            if (a[i]>0)
            {
                a[i]=c[k];
                k++;
            }
        }
    }
    printArray(a, n);
    return 0;
}