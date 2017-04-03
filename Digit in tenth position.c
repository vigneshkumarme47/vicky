#include<stdio.h>
#include <stdlib.h>

int main()
{
    int a,s,i;
    scanf("%d",&a);
    for(i=0;i<=1;i++)
    {
        s=a%10;
        a=a/10;
    }
    printf("%d",s);
    

}
