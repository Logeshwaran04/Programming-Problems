/* Only one number will occur odd number of times*/
#include <stdio.h>

int main()
{
    int n,i,t=0;
    printf("Enter the array size - ");
    scanf("%d",&n);
    printf("Enter the elements - ");
    int a[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        t=t^a[i];
    }
    printf("%d is Occuring odd number of times",t);
    return 0;
}
