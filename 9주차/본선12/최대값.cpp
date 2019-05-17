#include <stdio.h>

int main()
{
    int max=0;
    int index=0;

    for (int i=1; i<=9; i++)
    {
        int a;
        scanf("%d", &a);
        if (a>max)
        {
            max = a;
            index = i;
        }
    }

    printf("%d\n%d\n", max, index);

    return 0;
}
