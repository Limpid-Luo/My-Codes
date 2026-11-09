#include <bits/stdc++.h>
#define rep(i,a,b) for (int i = a; i < b; ++ i)
#define per(i,a,b) for (int i = b; i > a; -- i)
#define endl '\n'
#define int long long

using namespace std;

void solve()
{
    int n;cin >> n;
    int num[n];
    rep(i,0,n) cin >> num[i];

    int m;cin >> m;
    int sum = 0;int tag = 10e3;int ans = 0;
    rep(i,0,n)
        rep(j,i+1,n)
            rep(k,j+1,n)
            {
                sum = num[i] + num[j] + num[k];
                if (llabs(sum-m) <= tag) 
                {
                    ans = sum;
                    tag = llabs(sum-m);
                }
            }
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