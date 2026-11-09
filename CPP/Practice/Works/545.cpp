#include <bits/stdc++.h>
#define rep(i,a,b) for (int i = a; i < b; ++ i)
#define per(i,a,b) for (int i = a; i > b; -- i)
#define endl '\n'
#define int long long

using namespace std;

void solve()
{
    int n;cin >> n;
    vector<int> N;
    rep(i,0,n)
    {
        int K;cin >> K;
        rep(j,0,K) 
        {
            int tmp;cin >> tmp;
            N.push_back(tmp);
        }
    }

    array<int,105> ans{};
    for (auto i : N) ans[i] ++;
    int it = 104;
    per(i,104,-1) 
        if (ans[i] > ans[it]) it = i;
    cout << it << ' ' << ans[it];
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