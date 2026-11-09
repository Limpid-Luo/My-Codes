#include <bits/stdc++.h>
#define rep(i,a,b) for (int i = a; i < b; ++ i)
#define per(i,a,b) for (int i = a; i > b; -- i)
#define endl '\n'
#define int long long

using namespace std;

struct mtrl
{
    int type;
    int cost;
};

void solve()
{
    int n,m;cin >> n >> m;
    vector<mtrl> data(m);
    rep(i,0,m) cin >> data[i].type >> data[i].cost;

    
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