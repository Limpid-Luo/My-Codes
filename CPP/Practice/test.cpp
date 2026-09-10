#include <iostream>
#define For(i, a, b) for (int i = a; i < b; ++i)
typedef long long ll;

ll& temp (){
    static ll test = 20;
    return test;
}
int main() {
    ll& test = temp();
    std ::cout << test << std::endl;
    return 0;
}