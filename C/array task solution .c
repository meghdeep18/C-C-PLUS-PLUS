#include<stdio.h> 
int main()
{
    int a[3][3],i,j,max;
    
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("Enter Array Element A[%d][%d] = ",i,j);
            scanf("%d",&a[i][j]);
        }
        
    }
    
    max = a[0][0];
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            if(max < a[i][j])
            {
                max = a[i][j];
            }
        }
    }
    printf("Maximum number in matrix = %d",max);
    return 0;
}