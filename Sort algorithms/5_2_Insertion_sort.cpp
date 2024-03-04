#include<iostream>

using namespace std;

void printArray(int a[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }
}

void insertion_sort(int a[], int n)
{
    for (int i = 1; i < n; i++)
    {
        int index = i;
        int value = a[i];
    while (index > 0 &&  value<a[index-1])
    {
        a[index]=a[index-1];
        index--;
    }
    a[index]=value;
    }
}

int main()
{
    int n;
    cin >> n;
    int a[n];
    for (int i=0; i<n; i++)
    {
        cin >> a[i];
    }
    insertion_sort(a,n);
    printArray(a,n);

}