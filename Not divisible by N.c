#include<stdio.h>
#include <stdlib.h>

int main()
{
    int a,b,c,i;
    scanf("%d\n%d\n%d\n",&a,&b,&c);
    for(i=a;i<=b;i++)
    {
        if(i%c!=0)
        printf("%d\t",i);
    }


}
