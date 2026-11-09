#include <bits/stdc++.h>
#define rep(i,a,b) for (int i = a; i < b; ++ i)
#define per(i,a,b) for (int i = b; i > a; -- i)
#define endl '\n'
#define int long long

using namespace std;

void solve()
{
    int n;cin >> n;
    int N[n];
    rep(i,0,n) cin >> N[i];
    int t; cin >> t;

    int tag1,tag2;
    rep(i,0,n)
        rep(j,i+1,n)
        {
            if (N[i] + N[j] == t) 
            {
                tag1 = i;tag2 = j;
            }
        }
    
    int tmp = tag1;
    if (tmp > tag2) swap(tag1,tag2);
    cout << tag1 << ' ' << tag2;
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