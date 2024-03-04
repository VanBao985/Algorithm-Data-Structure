#include<bits/stdc++.h>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    int n;
    stack<int> st;
    cin >> n;
    while (n)
    {
        st.push(n%2);
        n=n/2;
    }
    while (!st.empty())
    {
        cout << st.top();
        st.pop();
    }
    return 0;
}