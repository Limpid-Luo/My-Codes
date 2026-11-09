#include <bits/stdc++.h>
#define rep(i,a,b) for (int i = a; i < b; ++ i)
#define per(i,a,b) for (int i = a; i > b; -- i)
#define endl '\n'
#define int long long

using namespace std;

const int NUM = 10005;
void solve()
{
    int t;cin >> t;
    int que[NUM] = {};

    rep(tmp,0,t)
    {
        int opt;cin >> opt;
        switch(opt)
        {
            case 1://push(x)
                int x;cin >> x;
                rep(i,0,NUM)
                    if (que[i] == 0) {que[i] = x;break;}
                break;
            case 2://pop
                if (que[0] == 0) cout << "ERR_CANNOT_POP" << endl;
                rep(i,0,NUM)
                {
                    if (que[i] == 0) break;
                    que[i] = que[i+1];
                }
                break;
            case 3://query
                if (que[0] == 0) cout << "ERR_CANNOT_QUERY" << endl;
                else cout << que[0] << endl;
                break;
            case 4://size
                int size = 0;
                rep(i,0,NUM)
                {    
                    if (que[i] == 0) break;
                    else ++ size;
                }
                cout << size << endl;
                break;
            default:
                return;
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