#include <stdio.h>

int main()
{
    int n,i;
    printf("Enter the array size - ");
    scanf("%d",&n);
    printf("Enter the elements - ");
    int a[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    int start=0,end=n-1,temp;
    while(start<end)
    {
        temp=a[start];
        a[start]=a[end];
        a[end]=temp;
        start++;
        end--;
    }
    printf("Reversed Array - ");
    for(i=0;i<n;i++)
    {
        printf("%d ",a[i]);
    }
    return 0;
}
