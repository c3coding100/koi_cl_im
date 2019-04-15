#include <cstdio>
int a[1001];
bool c[1001];
void dfs(int x) {
    if (c[x]) return;
    c[x] = true;
    dfs(a[x]);
}
int main() {
    int t;
    scanf("%d", &t);
    while (t--) {
        int n;
        scanf("%d", &n);
        for (int i=1; i<=n; i++) {
            scanf("%d", &a[i]);
            c[i] = false;
        }
        int ans = 0;
        for (int i=1; i<=n; i++) {
            if (c[i] == false) {
                dfs(i);
                ans += 1;
            }
        }
        printf("%d\n", ans);
    }
    return 0;
}
