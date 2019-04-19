#include <stdio.h>
int main(){
    int a,b,c,d;
    char ch[6] = "DCBAE";
    for(int i=0; i<3; i++) {
        scanf("%d%d%d%d", &a,&b,&c,&d);
        printf("%c\n", ch[a+b+c+d]);
    }

    return 0;
}
