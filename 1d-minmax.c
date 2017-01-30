#include <stdio.h>

int findMin(int num[],int size)
{
    int min = 9999;
    int i;

    for(i=0;i<size;i++)
        if(num[i]<= min)
            min = num[i];

    return min;

}

int findMax(int num[],int size)
{
    int max = -1;
    int i;

    for(i=0;i<size;i++)
        if(num[i] >= max)
            max = num[i];

    return max;

}

void main(){
    int num[10];
    int col;
    int i,j;
    int min = 9999,max = -1;

    col = sizeof(num)/sizeof(num[0]);


    for(i=0;i<col;i++){
            printf("input number for col = %d : ",i);
            scanf("%d",&num[i]);
        }


    for(i=0;i<col;i++)
        printf("%d ",num[i]);

    printf("\nMin = %d",findMin(num,col));
    printf("\nMax = %d",findMax(num,col));
    return 0;
}

