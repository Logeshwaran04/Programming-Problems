/*Moore's Voting Algorithm*/
#include <stdio.h>

int main()
{
    int n,i,j,count=1;
    printf("Enter the size of array - ");
    scanf("%d",&n);
    printf("Enter the elements - ");
    int a[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
   int max=0;
    for(i=1;i<n;i++)
    {
        if(a[max]==a[i])
        count++;
        else
        count--;
        if(count==0)
        {
            max=i;
            count=1;
        }
        
    }
    count=0;
    for(i=0;i<n;i++)
    {
        if(a[max]==a[i])
        {
            count++;
        }
        if(count>n/2)
        {
            printf("Majority element = %d",a[max]);
            return 0;
        }
    }
    printf("No Majority element");
    return 0;
}
