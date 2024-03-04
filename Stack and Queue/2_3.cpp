#include<iostream>
#include<stack>
#include<string>

using namespace std;

string int_to_char(int n)
{
    string s;
    while (n)
    {
    s = char ((n%10)+'0') + s;
    n/=10;
    }
    return s;
}

int main()
{
    string s;
    getline(cin,s);
    s+='@';
    stack<char> st;
    string str="";
    for (int i = 0; i < s.length(); i++)
    {
        if (st.empty() || s[i]==st.top())
        {
            st.push(s[i]);
        }
        else
        {
            str += st.top();
            int count =0;
            while (!st.empty())
            {
                count ++;
                st.pop();
            }
            str = str + int_to_char(count);
            st.push(s[i]);
        }
    }
    cout << str;
    return 0;
}