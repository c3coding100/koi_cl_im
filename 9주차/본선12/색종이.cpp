#include <stdio.h>
bool p[101][101];

int main()
{
    int n;
    int x,y;
    int i,j;

    scanf("%d",&n);
    while (n>0)
    {
        n--;
        scanf("%d%d",&x,&y);
        for (i=x;i<x+10;i++)
            for (j=y;j<y+10;j++)
                p[i][j]=true;
    }

    int area=0;
    for (i=1;i<100;i++)
        for (j=1;j<100;j++)
            if (p[i][j]) area++;

    printf("%d\n",area);

    return 0;
}
