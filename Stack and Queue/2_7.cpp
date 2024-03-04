#include<iostream>
#include<queue>

using namespace std;

int main()
{
    int n;
    cin >> n;
    queue<int> q;
    int a[1001];
    bool b[1001];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        b[a[i]]=false;
    }
    int k;
    cin >> k;
    for (int i = 0; i < n; i++)
    {
        if (b[a[i]]==false)
        {
            if (q.size()<k)
            {
                q.push(a[i]);
                b[a[i]]=true;
            }
            else
            {
                b[q.front()]=false;
                q.pop();
                q.push(a[i]);
                b[a[i]]=true;
            }    
        }
    }
    while (!q.empty())
    {
        cout << q.front() << " ";
        q.pop();
    }
    
    
    
}