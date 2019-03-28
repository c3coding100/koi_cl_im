#include <stdio.h>
int main() {
    int h, m;
    int d;

    scanf("%d%d%d", &h, &m, &d);

    m += d;
    h += m/60;
    m %= 60;
    h %= 24;

    printf("%d %d\n", h, m);

    return 0;
}
