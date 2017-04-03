#include<stdio.h>
#include <stdlib.h>

int main()
{
    int a,b=0,i;
    scanf("%d",&a);
    while(a!=0)
    {
    b=a%10+b*10;
    a=a/10;
    }
    printf("%d",b);

}
