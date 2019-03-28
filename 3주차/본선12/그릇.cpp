#include <stdio.h>
int main() {
    char str[100];
    int ans = 10;
    scanf("%s", str);

    for (int i=1; str[i]; i++){
        if (str[i]==str[i-1])
            ans += 5;
        else ans += 10;
    }

    printf("%d", ans);

    return 0;
}
