#include <bits/stdc++.h>
#define rep(i,a,b) for (int i = a; i < b; ++ i)
#define per(i,a,b) for (int i = b-1; i >= a; -- i)
#define endl '\n'
#define int long long

using namespace std;

void solve()
{
    int sum = 0;
    rep(i,0,9)
    {
        int n;cin >> n;
        if (i == 0 || i == 4 || i == 8) sum += n;
    }
    cout << sum;
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