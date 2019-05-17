#include <cstdio>
#include <algorithm>
using namespace std;
const int MAXN = 1e5 + 10;
const int MAXL = 1e6 + 10;

pair<int, int> p[MAXN];
int lx[MAXL], ly[MAXL];

int main() {
	int n;
	scanf("%d", &n);
	int x, y;
	for(int i=1;i<=n;i++) {
		scanf("%d%d", &x, &y);
		x += MAXL / 2;
		y += MAXL / 2;
		p[i] = pair<int, int>(x, y);
	}
	for(int i=1;i<=n;i++) {
		int j = i%n + 1;
		if(p[i].first == p[j].first) {
			int y1 = p[i].second;
			int y2 = p[j].second;
			ly[min(y1,y2)]++, ly[max(y1,y2)]--;
		}
		else {
			int x1 = p[i].first;
			int x2 = p[j].second;
			lx[min(x1,x2)]++, lx[max(x1,x2)]--;
		}
	}
	for(int i=1;i<MAXL;i++) lx[i] += lx[i-1];
	for(int i=1;i<MAXL;i++) ly[i] += ly[i-1];
	int ans = max(*max_element(lx, lx+MAXL), *max_element(ly, ly+MAXL));
	printf("%d\n", ans);
	return 0;
}
