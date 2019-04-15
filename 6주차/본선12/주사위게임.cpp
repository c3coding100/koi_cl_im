#include <stdio.h>
int main(){
    int N,a,b,c;
    int score, ans=0;

    scanf("%d", &N);
    for(int i=1; i<=N; i++) {
        scanf("%d %d %d", &a, &b, &c);

        if(a==b && b==c) {
            score = 10000 + a*1000;
        }
        else if(a==b || a==c) {
             score = 1000 + a*100;
        }
        else if(b==c) {
             score = 1000 + b*100;
        }
        else if(a>b && a>c) {
             score = 100*a;
        }
        else if(b>c) {
             score = 100*b;
        }
        else {
             score = 100*c;
        }

        if(ans < score) ans = score;
    }

    printf("%d\n", ans);

    return 0;
}
