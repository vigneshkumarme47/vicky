#include<stdio.h>
#include <stdlib.h>

int main()
{
    int a,b,c,k;
    scanf("%d\n%d\n%d\n",&a,&b,&c);
    if(a<=b&&a<=c)
    k=a;
    else if(b<=a&&b<=c)
    k=b;
    else
    k=c;
    printf("%d",k);


}
