//单调队列+滑动窗口
#include <bits/stdc++.h>
#define rep(i,a,b) for (int i = a; i < b; ++ i)
#define per(i,a,b) for (int i = a; i > b; -- i)
#define endl '\n'
#define int long long

using namespace std;

void solve()
{
    
}

/*
const int MXN = pow(2,31);
void solve()
{
    int n,k;cin >> n >> k;
    int a[n];
    rep(i,0,n) cin >> a[i];

    int mx[n-k+1],mn[n-k+1];
    rep(i,0,n-k+1)
    {
        int mx_t = -MXN,mn_t = MXN;
        rep(j,i,i+k)
        {
            
            if (a[j] > mx_t) mx_t = a[j];
            if (a[j] < mn_t) mn_t = a[j];
        }
        mx[i] = mx_t;mn[i] = mn_t;
    }

    rep(i,0,n-k+1) cout << mn[i] << ' ';
    cout << endl;
    rep(i,0,n-k+1) cout << mx[i] << ' ';
}
暴力遍历，90分，会爆tle
*/

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