#include<bits/stdc++.h>

using namespace std;

int BinSearch(int a[], int n, int x){
	int l = 0, r = n-1;
	while (l < r){
		int mid = (l+r)/2;
		if (a[mid] < x){
			l = mid+1;
		}
		else
        {
            if (a[mid] > x)
			r = mid;
            else return mid;
		}
	}
	return -1;
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int n,x;
    cin >> n;
    int *a = new int[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    cin >> x;
    BinSearch(a, n, x);
    return 0;
}

