#include <bits/stdc++.h>
#define rep(i,a,b) for (int i = a; i < b; ++ i)
#define per(i,a,b) for (int i = b-1; i >= a; -- i)
#define pb push_back
#define endl '\n'
#define int long long

using namespace std;

struct stu
{
    int id,h,w;
};

bool cmp (const stu& a,const stu& b)
{
    if (a.h != b.h) return a.h < b.h;
    else return a.w < b.w;
}

void solve()
{
    int n; cin >> n;
    vector<stu> s(n);
    rep(i,0,n) cin >> s[i].h,s[i].id = i+1;
    rep(i,0,n) cin >> s[i].w;

    sort(s.begin(),s.end(),cmp);

    for (auto i : s)
        cout << i.id << ' ';
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