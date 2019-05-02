#include <stdio.h>
int main()
{
    int n, i,k, a[1000], cnt = 0;
    scanf("%d %d", &n, &k);
    for (i=1;i<=n;i++) {
        if (n % i == 0) {
            a[++cnt] = i;
        }
    }

    if (cnt < k){
        printf("0");
    }
    else {
        printf("%d", a[k]);
    }
    return 0;
}
