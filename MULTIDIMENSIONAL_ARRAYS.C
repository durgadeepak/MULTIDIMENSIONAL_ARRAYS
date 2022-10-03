#include<stdio.h>
int main()
{
    int i,j,arr[10][10],k=0,*b;
    b=&arr;
    int sum=0;
    printf("Enter elements:\n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            scanf("%d",(b+i+j));
        }
        
    }
    printf("\nMATRIX IS:\n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
       {
        printf("%d  ",*(b+i+j));
       }
      printf("\n");
    }
    
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            k++;
            printf("Element-[%d][%d]: %d element-%d\n",i,j,k,*(b+i+j));
            if(i==j)
            {
            sum+=*(b+i+j);
            }
        }
    }
    printf("Sum of diagonals is:%d",sum);
    return 0;
}
