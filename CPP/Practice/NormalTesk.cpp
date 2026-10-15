#include <iostream>
#include <vector>
#define For(a, b, c) for (int a = b; a < c; ++a)
using namespace std;

bool isPrime(const int &n)
{
    if (n <= 1)
        return 0;
    if (n == 2 || n == 3)
        return 1;
    if (n % 6 != 1 && n % 6 != 5)
        return 0;
    for (int i = 5; i * i <= n; i += 6)
        if (n % i == 0 || n % (i + 2) == 0)
            return 0;
    return 1;
}

void solve()
{
    int n;
    cin >> n;
    cout << (isPrime(n) ? "Yes" : "No");
}
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t = 1;
    while (t --)
    {
        solve();
    }
    return 0;
}