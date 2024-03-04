#include<bits/stdc++.h>

using namespace std;

int n,sum;
int s,e;
int *A = new int[n];
int *B = new int[n];

void input()
{
    ios_base::sync_with_stdio(0); 
    cin.tie(0); cout.tie(0);
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> A[n];
    }
    cin >> sum;
}

int binaryS(int A[], int l, int r)
{
    int m = (l+r)/2;
    if (m==l) return -1;
    if (A[m]<=sum) return binaryS(A,m, r);
    return m;
}

void practice(int A[], int B[])
{
    B[0]=A[0];
    for (int i = 1; i < n; i++)
    {
        B[i]=B[i-1]+A[i];
    }
}

void solution()
{
    int m = binaryS(A,0,n);
    if (m!=-1)
    {
        for (int i = 0; i < m; i++)
        {
            if (A[m]-A[i]==sum) 
            {
                s=i;
                e=m;
                return;
            }
        }
        
        
    }
}




