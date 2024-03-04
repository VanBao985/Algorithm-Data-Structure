#include<iostream>
#include<stack>
#include<string>

using namespace std;

int main()
{
    string s;
    stack<char> st;
    getline(std::cin,s);
    for (int i=0;i<s.length();i++)
    {
        st.push(s[i]);
    }
    while (st.size())
    {
        cout << st.top();
        st.pop();
    }
    return 0;
}