#include <stdio.h>
#define max 100000
int main()
{
    int n,i,j,sum,t;
    printf("Enter the array Size ");
    scanf("%d ",&n);
    int a[n];
    printf("Enter the elements");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("Enter the Sum to be find");
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
    printf("Pair is not found");
    return 0;
}
