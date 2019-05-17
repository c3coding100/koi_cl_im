#include <cstdio>
#include <vector>
using namespace std;

int main(){
	int n;
	scanf("%d", &n);
	vector<int> v(n);
	for(int i=0; i<n; i++)
        scanf("%d", &v[i]);
	int mxv = -1;
	int dap = 0;
	for(int i=n-1; i>=0; i--){
		if(mxv < v[i]){
			mxv = v[i];
			dap++;
		}
	}
	printf("%d\n", dap);
	return 0;
}
