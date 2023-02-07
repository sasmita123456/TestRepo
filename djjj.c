#include <stdio.h>
main()
{
    int arr[6],i;
    printf("enter array elements");
    for(i=0;i<6;i++)
    {
       scanf("%d",&arr[i]);
     
    }
     printf("\nreverse array elements");
    for(i=5;i>=0;i--)
    {
       printf("%d ",arr[i]);
     
    }
    
    
}
