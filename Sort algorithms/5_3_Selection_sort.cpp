#include<iostream>

using namespace std;

void printArray(int a[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }   
}

void selection_sort(int a[], int n)
{
    for (int i = 0; i < n-1; i++)
    {
        int indexMin =i;
        for (int j = i+1; j < n; j++)
        {
            if (a[j]<a[indexMin]) indexMin = j;
        }
        if(i != indexMin)
        {
            int temp=a[i];
            a[i]=a[indexMin];
            a[indexMin]=temp;
        }
    }
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
    selection_sort(a,n);
    printArray(a,n);
    return 0;
    
}