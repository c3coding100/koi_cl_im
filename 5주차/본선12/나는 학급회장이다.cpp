#include <stdio.h>
int main(){
    //1���� �����
    int n, x, arr[4][4] = { 0, }, sum[4] = { 0, };
    scanf("%d", &n);

    for (int i = 0; i < n; ++i){
        for (int j = 1; j <= 3; ++j){
            scanf("%d", &x);
            arr[j][x]++;    //j�� �ĺ��� x�� ����
            sum[j] += x;
        }
    }

    int maxCap = 0, Cap = 0;
    for (int i = 1; i <= 3; ++i){
        maxCap = (maxCap < sum[i]) ? sum[i]: maxCap;
    }

    for (int i = 1; i <= 3; ++i){
        if (maxCap == sum[i]){
	    //3���� ���� ���
            if (arr[Cap][3] < arr[i][3]){
                Cap = i;
            }
	    //3�� ������ ������ 2���� ���� ���
            else if (arr[Cap][3] == arr[i][3]){
                if (arr[Cap][2] < arr[i][2]){
                    Cap = i;
                }
		//3��, 2�� ���� ��� ���� ���(ȸ�� ����X)
                else if (arr[Cap][2] == arr[i][2]){
                    Cap = 0;
                    break;
                }
            }
        }
    }
    printf("%d %d\n", Cap, maxCap);

    return 0;
}
