#include <bits/stdc++.h>
#define rep(i,a,b) for (int i = a; i < b; ++ i)
#define per(i,a,b) for (int i = a; i > b; -- i)
#define endl '\n'
#define int long long

using namespace std;

void solve()
{
    array<int,12> a;
    rep(i,0,12) cin >> a.at(i);

    int m = 0,n = 0;
    rep(i,0,12)
    {
        m += 300;int tmp = m - a.at(i); 
        if(tmp < 0) {cout << -(i+1);return;}
        else if(tmp/100 > 0) {n += tmp/100*100;m =tmp - tmp/100*100;}
        else m = tmp;
    }
    cout << m + n*1.2;
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