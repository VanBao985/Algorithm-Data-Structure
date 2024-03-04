#include<iostream>

using namespace std;

void permutation(int a[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " "; 
    }
    cout << endl;
    for (int i = n-2; i >= 0; i--)
    {
        if (a[i]<a[i+1])
        {
            int index = i;
            int minindex = i+1;
            i++;
            while(i<n)
            {
                if (a[i]>a[index] && a[i]<a[minindex])
                minindex = i;
                i++;
            }
            int temp=a[index];
            a[index]=a[minindex];
            a[minindex]=temp;
            int length=n-index-1;
            for (int i = 0; i < length/2; i++)
            {
                int temp = a[index+1+i];
                a[index+1+i]=a[n-1-i];
                a[n-1-i]=temp;
            }
            break;
        }
    }   
}

bool permutationEnd(int a[], int n)
{
    for (int i = 0; i<n-1; i++)
    {
        if (a[i]<a[i+1])
        {
            return false;
        }
    }
    permutation(a,n);
    return true;
}

int a[100001];
int main()
{
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        a[i]=i+1;
    }
    while(!permutationEnd(a, n))
    {
        permutation(a, n);
    }
    return 0;
}