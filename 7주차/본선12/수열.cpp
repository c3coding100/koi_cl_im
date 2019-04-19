#include <stdio.h>
#define max(a,b) (((a)>(b))?(a):(b))
int main(){
    int n;
    int arr[100000];
    int i;
    int maxx=1;
    int minn=1;
    int ans=1;

    scanf("%d",&n);
    for(i = 0;i < n;i++){
        scanf("%d",&arr[i]);
    }
    for(i=1;i<n;i++)
    {
        if(arr[i-1]==arr[i]){
            maxx++;
            minn++;
        } else if(arr[i-1]>arr[i])
        {
            minn++;
            maxx=1;
        } else
        {
            minn=1;
            maxx++;
        }
        ans = max(ans,minn);
        ans = max(ans,maxx);
    }

    printf("%d",ans);

    return 0;
}
