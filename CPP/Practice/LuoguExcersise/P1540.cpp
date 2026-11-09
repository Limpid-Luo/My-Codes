#include <bits/stdc++.h>
#define rep(i,a,b) for (int i = a; i < b; ++ i)
#define per(i,a,b) for (int i = a; i > b; -- i)
#define endl '\n'
#define int long long

using namespace std;

const int MXN = 10005;
void solve()
{
    int m,n;cin >> m >> n;
    queue<int> D;bool v[MXN] = {0};

    int t = 0;
    while (n --)
    {
        int w;cin >> w;
        if (!v[w])
        {
            ++ t;
            if (D.size() > m-1) {v[D.front()] = 0;D.pop();}
            D.push(w);
            v[w] = 1;
        }
    }
    cout << t;
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