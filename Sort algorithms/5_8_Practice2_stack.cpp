#include<bits/stdc++.h>

using namespace std;

void quickSort(int a[], int l, int r)
{
    int p = a[(l+r)/2];
    int i = l;
    int j = r;
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
        if(i%2) 
        {
            cout << a[i] << "; ";
        }
        else
        {
            cout << a[i] << " ";
        }
    }
    cout << endl;  
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
    stack<int> st;
    int count=0;
    int c[100001];
    int size = 0;
    int i =0;
    for (i = 0; i < n; i++)
    {
        if(st.empty() || a[i] == st.top())
        {
            st.push(a[i]);
            count++;
        }
        else
        {
            c[size]=a[i-1];
            size++;
            c[size]=count;
            size++;
            while (st.size())
            {
                st.pop();
            }
            st.push(a[i]);
            count=1;
        }   
    }
    c[size]=a[i-1];
    size++;
    c[size]=count;
    printArray(c, size+1);
    return 0;
}