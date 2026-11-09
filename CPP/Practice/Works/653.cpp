#include <bits/stdc++.h>
#define rep(i,a,b) for (int i = a; i < b; ++ i)
#define per(i,a,b) for (int i = b-1; i >= a; -- i)
#define pb push_back
#define endl '\n'
#define int long long

using namespace std;

void solve()
{
    string s;getline(cin,s);
    stringstream ss(s);string tmp;
    vector<string> ans;
    while(ss >> tmp) ans.pb(tmp);

    sort(ans.begin(),ans.end());

    for (auto i : ans) cout << i << ' ';
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