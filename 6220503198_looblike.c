#include<stdio.h>
int main()
{
    int a,temp,i,j,max;
    int n[1001];
    scanf("%d",&a);
    for(i=0;i<a;i++)
    {
        scanf("%d",n[i]);
    }
        for(i=0;i<a;i++)
         for(j=0;j<a;j++)
        if(n[j]>n[j+1])
        {
            temp = n[j];
            n[j]=n[j+1];
            n[j+1]=temp;
        }




}
