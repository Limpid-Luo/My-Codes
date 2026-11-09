#include <bits/stdc++.h>
#define rep(i,a,b) for (int i = a; i < b; ++ i)
#define per(i,a,b) for (int i = b; i > a; -- i)
#define endl '\n'
#define int long long

using namespace std;

vector<int> N(1005),C(105,0),ans(350);
void solve()
{
    int n;cin >> n;
    rep(i,0,n)
    {
        cin >> N[i];
        ++ C[N[i]];
    }

    bool tag[105] = {0};
    bool found = 0;
    rep(i,0,n)
    {
        if (C[N[i]] > 2 && !tag[N[i]])
        {
            tag[N[i]] = 1;
            found = 1;
            cout << N[i] << " ";
        }
    }
    if (!found) cout << "No";
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