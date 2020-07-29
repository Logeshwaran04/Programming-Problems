#include <stdio.h>
#define max 100000
int main()
{
    int n,i,j,sum,t;
    scanf("%d ",&n);
    int a[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    scanf("%d",&sum);
    int s[max]={0};
    for(i=0;i<n;i++)
    {
        t=sum-a[i];
        if(s[t]==1)
        {
            printf("%d+%d=%d",a[i],t,sum);
            return 0;
        }
        s[a[i]]=1;
    }

    return 0;
}
