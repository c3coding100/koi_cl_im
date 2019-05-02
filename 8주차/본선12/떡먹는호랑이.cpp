#include <stdio.h>
int main()
{
    int d,k,i,j,l,a[31];
    bool exit = false;

    scanf ("%d%d",&d,&k);
    for (i=1; i<=k-1; i++)
    {
        if(exit==true) break;
        for (j=i; j<=k-1; j++)
        {
            a[1]=i,a[2]=j;
            for (l=3; l<=d; l++)
                a[l]=a[l-1]+a[l-2];
            if (a[d]==k)
            {
                printf ("%d\n%d",i,j);
                exit = true;
                break;
            }
        }
    }
    return 0;
}
