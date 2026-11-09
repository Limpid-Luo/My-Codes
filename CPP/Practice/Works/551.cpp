#include <bits/stdc++.h>
#define rep(i,a,b) for (int i = a; i < b; ++ i)
#define per(i,a,b) for (int i = b; i > a; -- i)
#define endl '\n'
#define int long long

using namespace std;

void solve()
{
    int mode,n;
    cin >> mode >> n;
    int num[n+1];
    rep(i,1,n+1) num [i] = i;

    if (mode)
    {
        rep(i,1,n+1)
        {
            cout << n << '*' << num[i] 
                 << '=' << n*num[i];
            if (i != n) cout << "  ";
        }
    }
    else
    {
        rep(i,1,n+1)
        {
            rep(j,1,i+1)
            {
                cout << i << '*' << num[j] 
                     << '=' << i*num[j];
                if (j != i) cout << "  ";
                else cout << endl;
            }
        }
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