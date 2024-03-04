#include<iostream>

using namespace std;

//ucln(a, b) = ucln(b, a%b);

int ucln(int a, int b)
{
    if (b==0) return a;
    if (a%b==0) return b;
    return ucln(b, a%b);
}

int main()
{
    int a, b;
    cin >> a >> b;
    cout << ucln(a,b);
}