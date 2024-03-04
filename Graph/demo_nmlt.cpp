#include<bits/stdc++.h>

using namespace std;

int cost;
int hour1, minute1, hour2, minute2;
void input()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cin >> hour1 >> minute1 >> hour2 >> minute2;
}

int ca_1(int time)
{
    if (time > 120) return 15 + (time/120)* 20;
    return 15;
}

int ca_2(int time)
{
    if (time > 120) return 40 + (time /120)* 25;
    return 40;
}

int main()
{
    input();
    int time = ((hour2-hour1)*60+(minute2-minute1));
    if (time<0) cout << "-1";
    else
    {
        if (time==0) cost = 0;
        else 
        {
            if (hour2 >=18) cost = ca_2(time);
            else 
            {
                cost = ca_1(time);
            }
        cout << cost;
        }
    }
    return 0;
}