#include<stdio.h>
#include <stdlib.h>

int main()
{
    int a,b,i,k=0;
    scanf("%d\n",&a);
    for(i=1;i<=a;i++)
    {
        scanf("%d",&b);
        k=k+b;
    }
    printf("%d",k);


}
