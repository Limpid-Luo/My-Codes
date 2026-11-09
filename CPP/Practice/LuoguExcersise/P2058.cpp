//海港国籍统计
#include <bits/stdc++.h>
#define rep(i,a,b) for (int i = a; i < b; ++ i)
#define per(i,a,b) for (int i = a; i > b; -- i)
#define endl '\n'
#define int long long

using namespace std;

int cnt[100005];//cnt[]用于保留国籍存储信息（桶数组）

void solve()
{
    int n; cin >> n;
    queue<pair<int,int>> Q;//考虑到多批乘客和国籍信息可以放一起
    int ans = 0;           //选择队列存pair而不是构造结构体

    while (n--)
    {
        int t,k; cin >> t >> k;
        rep(i,0,k)
        {
            int x; cin >> x;
            Q.push({t,x});
            if (++ cnt[x] == 1) ++ ans;
        }

        while (!Q.empty() && t-Q.front().first >= 86400)
        {//弹出超过24小时的船只数据
            int x = Q.front().second;
            Q.pop();
            if (-- cnt[x] == 0) -- ans;
        }
        cout << ans << endl;
    }
}

signed main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t = 1;
    //cin >> t;
    while (t --)
    {
        solve();
    }
    return 0;
}