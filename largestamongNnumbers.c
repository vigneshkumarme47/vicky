#include<stdio.h>
#include <stdlib.h>

int main()
{
    int a,b=0,i;
    for(i=1;i<=50;i++)
    {
        scanf("%d\n",&a);
        if(a>b)
        b=a;
        
    }
    printf("%d",b);

}
