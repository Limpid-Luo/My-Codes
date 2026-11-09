#include <bits/stdc++.h>
#define rep(i,a,b) for (int i = a; i < b; ++ i)
#define per(i,a,b) for (int i = b-1; i >= a; -- i)
#define pb push_back
#define endl '\n'
#define int long long

using namespace std;

void solve()
{
    int m,n;cin >> m >> n;
    vector<int> v(n*m);int tmp;

    rep(i,0,n*m) cin >> tmp,v[i] = tmp;
    sort(v.begin(),v.end());
    
    int ans[m][n];
    rep(i,0,m)
        if(i%2) 
            rep(j,0,n) ans[i][j] = v[i*n+j];
        else
            rep(j,0,n) ans[i][n-1-j] = v[i*n+j];

    rep(i,0,m)
    {
        rep(j,0,n) cout << ans[i][j] << ' ';
        cout << endl;
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