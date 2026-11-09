#include <bits/stdc++.h>
#define rep(i,a,b) for (int i = a; i < b; ++ i)
#define per(i,a,b) for (int i = b-1; i >= a; -- i)
#define endl '\n'
#define int long long

using namespace std;

void solve()
{
    char a,b;int m;
    cin >> a >> m;

    int t = 0;
    while (cin >> b && b != '#')
    {
        if (tolower(b)==tolower(a)) t ++;
        if (tolower(b)==tolower(a))
        {
            if (t <= m) continue;
            else cout << b;
        }
        else
            cout << b;
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