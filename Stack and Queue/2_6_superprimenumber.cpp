#include<iostream>
#include<queue>
#include<math.h>

//Kiem tra so sieu nguyen to
using namespace std;

bool prime_number(int n)
{
    if (n<2) return false;
    for (int i = 2; i <= sqrt(n); i++)
    if(n%i==0) return false;
    return true;
}

int main()
{
    int n;
    queue<int> q;
    cin >> n;
    for (int i = 0; i < n, i < 10; i++)
    {
        if (prime_number(i))
        q.push(i);
    }
    while (!q.empty())
    {
        for (int i = 0; i <= 9; i++)
        {
            int k = q.front() * 10 + i;
            if (k<=n && prime_number(k))
            {
                q.push(k);
            }
        }
        cout << q.front() << " ";
        q.pop();
    }    
    
}