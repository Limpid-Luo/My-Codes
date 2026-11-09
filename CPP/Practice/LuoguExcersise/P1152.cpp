#include <bits/stdc++.h>
#define rep(i,a,b) for (int i = a; i < b; ++ i)
#define per(i,a,b) for (int i = a; i > b; -- i)
#define endl '\n'
#define int long long

using namespace std;

void solve()
{
    int n; cin >> n;
    vector<int> a(n);
    rep(i,0,n) cin >> a[i];

    vector<bool> dis(n, 0);
    rep(i,0,n-1)
    {
        int d = llabs(a[i+1] - a[i]);
        if (d >= 1 && d <= n-1) dis[d] = 1;
    }

    bool tag = 1;
    rep(i,1,n)
        if (!dis[i]) { tag = 0; break; }

    cout << (tag ? "Jolly" : "Not jolly");
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