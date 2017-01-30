#include <stdio.h>

void main(){
    int num[2][5];
    int row,col;
    int i,j;
    int min = 9999,max = -1;

    row = sizeof(num)/sizeof(num[0]);
    col = sizeof(num[0])/sizeof(num[0][0]);


    for(i=0;i<row;i++)
        for(j=0;j<col;j++)
        {
            printf("input number for Row = %d Col = %d : ",i,j);
            scanf("%d",&num[i][j]);
        }

    for(i=0;i<row;i++)
        for(j=0;j<col;j++)
        {
            if(num[i][j] <= min)
                min = num[i][j];
            
            if(num[i][j] >= max)
                max = num[i][j];
        }

    printf("Min = %d \nMax = %d",min,max );
    return 0;


}
