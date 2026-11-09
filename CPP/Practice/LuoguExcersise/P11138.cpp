//APC消消乐，用队列存储三个字母的位置信息
#include <bits/stdc++.h>
#define rep(i,a,b) for (int i = a; i < b; ++ i)
#define per(i,a,b) for (int i = a; i > b; -- i)
#define endl '\n'
#define int long long

using namespace std;

struct pos
{
    int a,p,c;
};

void solve()
{
    string s;cin >> s;
    queue<int> qa,qp,qc;
    queue<pos> ans;
    rep(i,0,s.size())
    {
        if (s[i] == 'A') qa.push(i+1);
        else if (s[i] == 'P' && (qa.size() > qp.size())) qp.push(i+1);
        else if (s[i] == 'C' && (qp.size() > qc.size()))
        {
            qc.push(i+1);
            pos tmp;tmp.a = qa.front(),tmp.p = qp.front(),tmp.c = qc.front(),
            s[tmp.a-1] = '0',s[tmp.p-1] = '0',s[tmp.c-1] = '0';
            qa.pop(),qp.pop();qc.pop();
            ans.push(tmp);
        }
    }

    bool tag = 0;;
    rep(i,0,s.size())
        if (s[i] != '0') {cout << s[i];tag = 1;}
    if (tag) cout << "Perfect";
    cout << endl << ans.size() << endl;
    while (ans.empty())
    {
        cout << ans.front().a << ' ' << ans.front().p << ' ' << ans.front().c << endl;
        ans.pop();
     }
    
}

signed main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t = 1;
    cin >> t;
    while (t --)
    {
        solve();
    }
    return 0;
}