#include <stdio.h>
int N, d[100], P;
int main() {
    int cur, count;
    scanf("%d %d", &N, &P);

    cur = N % P;
    count = 1;
    while(1)
    {
        d[cur] = count++;
        cur = (cur * N) % P;
        if(d[cur]){
            printf("%d", count - d[cur]);
            break;
        }
    }

    return 0;
}
