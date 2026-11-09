#include <bits/stdc++.h>
#define rep(i,a,b) for (int i = a; i < b; ++ i)
#define per(i,a,b) for (int i = b; i > a; -- i)
#define endl '\n'
#define int long long

using namespace std;

void solve()
{
    int n; cin >> n;
    set<int> ans;int tmp;
    rep(i, 0 ,n)
    {
        cin >> tmp;
        ans.insert(tmp);
    }

    for (auto i : ans) cout << i << " ";
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