#include <stdio.h>
//#define int long long
#define For(i, a, b) for (int i = a; i < b; ++i)
signed main() {
    int sum= 0;
    For(i, 1, 101){
        sum =  sum + i;
    }
    printf("%d\n", sum);
    /*
    scanf("%d", &tag);
    printf("%d\n", ++tag);
    */
    return 0;
}