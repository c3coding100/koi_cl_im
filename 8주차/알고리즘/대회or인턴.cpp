#include <cstdio>
int main() {
    int m,n,k;
    scanf("%d%d%d", &m, &n, &k);

    int ans = 0;
    while (m >= 2 && n >= 1 && m+n >= k+3) {
        ans += 1;
        m -= 2;
        n -= 1;
    }
    printf("%d\n", ans);

    return 0;
}
