#include <stdio.h>
int yy[]={1,0,-1,0},xx[]={0,1,0,-1};
int A[1001][1001];
int Y[1000001];
int X[1000001];
int main(void)
{
    int C,R;
    scanf("%d%d",&C,&R);
    int x=1;
    int y=0;
    int d=0;
    for (int i=1;i<=R*C;i++){
        int ny = y+yy[d], nx = x+xx[d];
        while (!(1 <= ny && ny <= R && 1 <= nx && nx <= C && !A[ny][nx])){
            d = (d+1)%4;
            ny = y+yy[d], nx = x+xx[d];
        }
        y = ny, x = nx;
        A[y][x] = i;
        Y[i] = y, X[i] = x;
    }

    int n;
    scanf("%d",&n);
    if (1 <= n && n <= R*C)
        printf("%d %d\n",X[n],Y[n]);
    else
        puts("0");

    return 0;
}
