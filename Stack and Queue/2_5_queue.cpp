#include<iostream>
#include<queue>

using namespace std;

int main()
{
    int n;
    cin >> n;
    queue<int> q;
    int temp;
    for (int i = 0; i < n; i++)
    {
        cin >> temp;
        q.push(temp);
    }
    int k;
    cin >> k;
    for (int i = 0; i < k; i++)
    {
        q.push(q.front());
        q.pop();
    }
    for (int i = 0; i < n; i++)
    {
        cout << q.front() << " ";
        q.pop();
    }
    
}