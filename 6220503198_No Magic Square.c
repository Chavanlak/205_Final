#include<stdio.h>
int main()
{
    int magic[100][100];
    int size;
    printf("Enter size : ");
    scanf("%d",&size);
    int s =size/2;
    int max = size*size;
    magic[0][s]=1;

    int row;
    int col;
    int next_row;
    int next_col;
    int num ;

    for(num=2,row=0,col=s;num<=max;num++)
    {

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
    if(magic[next_row][next_col]>0)
    {
        if((row+1)>(size-1))
            next_row = 0;
    }


    else
    {
        next_row=row+1;
        next_col=col;

    }

}
row=next_row;
col=next_col;
magic[row][col]=num;
}
    int i,j;
    for(i=0;i<size;i++)
{
    for(j=0;j<size;j++)
    {
        printf("%3d"magic[i][j]);
    }
    printf("\n");
}
getch();
}

