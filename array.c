#include <stdio.h>
#include <string.h>

void fn21();
void fn22();
void fn23();
void fn24();
void fn30();
int main()
{
    //1.1
    float a[]= {1.0,2.0,3.0,4.0,5.0,6.0,7.0,8.0,9.0};
    //1.2
    char b[] = "abcdefghij";
    //1.3
    char c[4][6] = {"abc","aa","ccccc","d" };
    //1.4
    int d[3][3] ={{1,4,7},{2,5,8},{3,6,9}};
    //1.5
    char h[3][5] = {"ABC","LOVE","DATA"};
    
    int n[4];
    printf("%d",sizeof(n));
}

//2.1
void fn21()
{
    float a[]= {1.0,2.0,3.0,4.0,5.0,6.0,7.0,8.0,9.0};
    int size,i;
    size = sizeof(a)/sizeof(a[0]);
    for(i=0;i < size ;i++)
        printf("%.1f ",a[i]);

    return 0;
}

//2.2
void fn22()
{
    char b[20] = "abcdefghij";
    int size,i;

    size = strlen(b);
    printf("size = %d\n",size);
    /*
        toupper => a->A
        tolower => A->a
        isupper => 0/1
        islower => 0/1
    */
    for(i=0;i<size;i++)
        b[i] = toupper(b[i]);// strcpy()

    for(i=0;i<size;i++)
        printf("%c ",b[i]);

}

//2.3
void fn23()
{
    int d[3][3] ={{1,4,7},{2,5,8},{3,6,9}};
    int i,j,row,col;

    row = sizeof(d)/sizeof(d[0]);
    col = sizeof(d[0])/sizeof(int);

    for(i=0;i<row;i++)
    {
        for(j=0;j<col;j++)
            printf("%d ",d[i][j]);
        printf("\n");
    }
        

}

//2.4
void fn24()
{
    int d[3][3] ={{1,4,7},{2,5,8},{3,6,9}};
    int i,j,row,col;

    row = sizeof(d)/sizeof(d[0]);
    col = sizeof(d[0])/sizeof(int);

    for(i=0;i<row;i++)
        for(j=0;j<col;j++)
            if(i == (row-1))
            {
                d[i][j++] = 5;
                d[i][j++] = 5;
                d[i][j++] = 6;
            }

    for(i=0;i<row;i++)
    {
        for(j=0;j<col;j++)
            printf("%d ",d[i][j]);
        printf("\n");
    }

}
//3
void fn30()
{
    float a[]= {1.0,2.0,3.0,4.0,5.0,6.0,7.0,8.0,9.0};
    int i,size;
    float total=0,average;

    size = sizeof(a)/sizeof(float);

    for(i=0;i<size;i++)
        total += a[i];
    printf("total value = %.2f \n",total);

    average = total / size;
    printf("Average value = %.2f \n",average);

}