#include<bits/stdc++.h>

using namespace std;

int x[11];
int cnt=0;
int n;
int h;

void solution()
{
	cout << ++cnt << ": ";
	for (int i = 1; i <= h; i++)
    {
		cout << x[i];
	}
	cout << endl;
}

bool check(int k)
{
	if (k<=n-h+k) return true;
	return false;
}

void Try(int k)
{
	for (int i = 1; i <= n; i++)
    {
		if (check(i) && i > x[k-1])
		{
			x[k] = i;
			if (k == h) 
			{
				solution();
			}
			else
			{
				Try(k+1);
			}
		}
	}
}

int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cin >> n >> h;
	Try(1);
	return 0;
}