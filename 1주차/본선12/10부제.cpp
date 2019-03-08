#include <stdio.h>
int main()
{
    int x;
    scanf("%d",&x);

    int y, cnt=0;
    for(int i=0;i<5;i++)
    {
        scanf("%d",&y);
        if( x==y ) cnt++;
    }
    printf("%d",cnt);

    return 0;
}
