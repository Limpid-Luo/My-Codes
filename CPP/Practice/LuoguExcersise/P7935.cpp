//三行数字去重
#include <bits/stdc++.h>
#define rep(i,a,b) for (int i = a; i < b; ++ i)
#define per(i,a,b) for (int i = a; i > b; -- i)
#define endl '\n'
#define int long long

using namespace std;

const int NUM = 1e5+5;
int a[3][NUM],b[3][NUM] = {};

void solve()
{
    int n;cin >> n;
    rep(i,0,3)
        rep(j,0,n) cin >> a[i][j],b[i][a[i][j]] ++;

    rep(i,0,100)//100次能把不合规的列剔除（maybe）
        rep(j,0,n)
            if (a[0][j] != -1)
                if (b[1][a[0][j]] == 0 || b[2][a[0][j]] == 0)
                    b[1][a[1][j]] --,b[2][a[2][j]] --,a[0][j] = -1;

    int ans = 0;
    rep(i,0,n) ans += (a[0][i] == -1);
    cout << ans;
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