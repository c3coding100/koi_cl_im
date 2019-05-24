#include <bits/stdc++.h>
using namespace std;

int N, start, end, ans, chk[100010];
struct data{
    int node, len;
};
vector<data> link[100010];

int dfs(int node, int sum_len, int max_len)
{
    if (chk[node]) return 0;
    chk[node] = 1;
    if (node == end) {
        ans = sum_len - max_len;
        return 1;
    }
    vector <data>::iterator p;
    for (p = link[node].begin(); p != link[node].end(); ++p) {
        if (dfs(p->node, sum_len + p->len, max(max_len, p->len))) return 1;
    }
    return 0;
}
int main()
{
    int s, e, d;
    scanf("%d%d%d", &N, &start, &end);

    for (int i = 1; i < N; i++) {
        scanf("%d%d%d", &s, &e, &d);
        link[s].push_back({ e, d });
        link[e].push_back({ s, d });
    }
    dfs(start, 0, 0);
    printf("%d\n", ans);
    return 0;
}


