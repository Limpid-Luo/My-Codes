#include <bits/stdc++.h>
#define endl '\n'
#define int long long
#define For(a,b,c) for (int a = b;a < c;++ a)
using namespace std;

struct stu
{
    string name;
    int c,m,e,s;
};
void solve()
{
    int n;
    cin >> n;
    vector<stu> s;
    For(i,0,n)
    {
        stu temp;
        cin >> temp.name >> temp.c >> temp.m >> temp.e;
        temp.s = temp.c + temp.m + temp.e;
        s.push_back(temp);
    }
    int best = 0;
    For(i, 1, n) if (s[i].s > s[best].s) best = i;
    cout << s[best].name << ' ' << s[best].c << ' ' << s[best].m << ' ' << s[best].e;
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