#include <bits/stdc++.h>
#define rep(i,a,b) for (int i = a; i < b; ++ i)
#define per(i,a,b) for (int i = b; i > a; -- i)
#define endl '\n'
#define int long long

using namespace std;

void solve()
{
    int n;cin >> n;
    set<int> N;int tmp;
    rep(i,0,n){cin>>tmp;N.insert(tmp);}
    int t;cin >> t;

    if (N.find(t) != N.end()) cout << distance(N.begin(),N.find(t));
    else cout << distance(N.begin(),N.upper_bound(t));
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