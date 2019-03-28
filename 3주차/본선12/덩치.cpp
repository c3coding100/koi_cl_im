#include <stdio.h>
int x[100], y[100];
int main() {
    int i, j, cnt;
    int n;
    scanf("%d", &n);

    for (i=1;i<=n;i++)
        scanf("%d%d", &x[i], &y[i]);
    for (i=1;i<=n;i++) {
        cnt = 1;
        for (j=1;j<=n;j++) {
            if (i != j) {
                if (x[j] > x[i] && y[j] > y[i])
                    cnt++;
            }
        }
        printf("%d ", cnt);
    }
    printf("\n");

    return 0;
}
