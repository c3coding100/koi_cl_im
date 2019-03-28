#include <stdio.h>
int main(void)
{
    int k,n,m;
    int ans;

    scanf("%d %d %d",&k,&n,&m);

    ans = k*n-m;
    if(ans<0) ans=0;

    printf("%d\n",ans);

    return 0;
}
