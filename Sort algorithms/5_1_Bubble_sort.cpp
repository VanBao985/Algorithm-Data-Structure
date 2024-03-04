#include<iostream>

using namespace std;

void printArray(int a[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }
    cout << endl;
}

void bubble_sort(int a[], int n)
{
    for (int i = n-1; i > 0 ; i--)
    {
        bool swapped = true;
        for (int j = 0; j < i; j++)
        {
            if (a[j]>a[j+1])
            {
                int temp=a[j];
                a[j]=a[j+1];
                a[j+1]= temp;
                swapped = false;
                printArray(a,n);
            }
        }
        if (swapped) break;
    }
}

int main()
{
    int a[100001];
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    bubble_sort(a, n);
    printArray(a, n);
}