#include <stdio.h>
int main() {
    int out, in, sum=0, ans=0;

    for(int i=0; i<4; i++) {
        scanf("%d %d", &out, &in);
        sum = sum - out + in;
        if(sum > ans) ans = sum;
    }
    printf("%d\n", ans);

    return 0;
}
