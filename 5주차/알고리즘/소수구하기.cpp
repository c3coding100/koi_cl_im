#include <cstdio>
const int MAX = 1000000;
bool check[MAX+1]; // true: ������, false: �������� ����
int main() {
    check[0] = check[1] = true;
    for (int i=2; i*i<=MAX; i++) {
        if (check[i] == false) {
            for (int j=i+i; j<=MAX; j+=i) {
                check[j] = true;
            }
        }
    }

    int m, n;
    scanf("%d%d", &m, &n);
    for (int i=m; i<=n; i++) {
        if (check[i] == false) {
            printf("%d\n", i);
        }
    }
    return 0;
}
