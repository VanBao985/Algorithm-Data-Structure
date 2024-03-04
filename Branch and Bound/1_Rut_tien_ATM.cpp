#include<bits/stdc++.h>

using namespace std;

const int maxn = 21;
int n, S, cnt, cnt_best, sum=0;
int a[21], mark[21], mark_best[21], maxmoney[21];
int t[21], t_max[21];

void enter()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    cin >> n >> S;
    for (int i = 1; i <= n; ++i)
        cin >> t[i];
}

void create_data()
{
    // cnt_best là số tờ tiền sử dụng trong phương án tốt nhất.
    // Ban đầu chưa có phương án nào, gán cnt_best = n + 1.
    cnt_best = n + 1;
	
    // t_max[i] lưu giá trị của tờ tiền lớn nhất từ i tới n.
    t_max[n] = t[n];
    for (int i = n - 1; i >= 0; --i)
        t_max[i] = max(t_max[i + 1], t[i]);
}

// Nếu tìm được một phương án tốt hơn thì cập nhật lại kết quả.
void update_best_solution()
{
    if (sum == S && cnt < cnt_best)
    {
        cnt_best = cnt;
		
        for (int i = 1; i <= n; ++i)
            mark_best[i] = mark[i];
    }
}

// In kết quả.
void solution()
{
    if (cnt_best == n + 1)
        cout << -1;
    else 
    {
        cout << cnt_best << endl;
        for (int i = 1; i <= n; ++i)
            if (mark_best[i])
                cout << t[i] << ' ';
    }
}

void branch_and_bound(int i)
{
    // Nếu nghiệm mở rộng của nhánh này không tốt hơn thì return.
    if (cnt + (S - sum) / t_max[i + 1] >= cnt_best)
        return;
		
    for (int j = 0; j <= 1; ++j)
    {
        // Ghi nhận thành phần thứ i.
        sum = sum + a[i] * j; 
        mark[i] = j;
        cnt += j;
		
        if (i == n) 
            update_best_solution();
        else if (sum <= S) 
            branch_and_bound(i + 1);
			
        // Loại bỏ thành phần thứ i.
        sum -= t[i] * j; 
        cnt -= j;
    }
}

int main()
{
    enter();
    create_data();
    branch_and_bound(1);
    solution();
    return 0;
}