#include<stdio.h>
int main()
{
    int a,temp,i,j,max;
    int n[1001];
    int ch[1001];
    int s[1001];
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
        ch[0]=n[0];
        j=0;
        for(i=1;i<a;i++)
        {
            if(n[i]==n[j-1])
            s[j]++;
            else
                {
                    j++;
                }

        }
        max = s[i];
        for(i=1;i<=j;i++)
            if(max<s[i]);
            max=s[i];
        for(i=0;i<=j;i++)
            if(s[i]==max)
            printf("%d",ch[i]);
        return 0;




}
