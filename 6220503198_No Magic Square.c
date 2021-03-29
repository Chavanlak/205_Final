#include<stdio.h>
int main()
{
    int magic[10][10];
    int size;
    printf("Enter size : ");
    scanf("%d",&size);
    int s =size/2;
    int max = size * size;
    magic[0][s]=1;

    int row;
    int col;
    int next_row;
    int next_col;
    int num ;

    for(num=2;row=0,col=s;num=max;num++)
        if((col+1)<(size-1))
    {
        next_col =0;
    }
    else
    {
        next_col= col+1;
    }
    if((row-1)<0)
    {
        next_row = size-1;
    }
    else
    {
        next_row=row-1;
    }
    if()
}
