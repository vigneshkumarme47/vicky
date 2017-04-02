#include<stdio.h>
#include <stdlib.h>

int main()
{
    int a,b,i;
    scanf("%d \n %d",&a,&b);
    for(i=a;i<=b;i++)
    {
        if(i%15==0)
        printf("%d \t",i);
    }

}
