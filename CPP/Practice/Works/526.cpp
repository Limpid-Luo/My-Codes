#include <bits/stdc++.h>
#define rep(i,a,b) for (int i = a; i < b; ++ i)
#define per(i,a,b) for (int i = b; i > a; -- i)
#define endl '\n'
#define int long long

using namespace std;

void solve()
{
    int n;cin >> n;
    vector<int> list(n);
    rep(i,0,n) cin >> list[i];

    int sum = list[0],ans = list[0];
    rep(i,1,n)
    {
        if (list[i] == list[i - 1]) sum += list[i];
        else sum = list[i];
        if (sum > ans) ans = sum;
    }
    cout << ans << endl;
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