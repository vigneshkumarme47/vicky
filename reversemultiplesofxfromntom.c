#include<stdio.h>
#include <stdlib.h>

int main()
{
    int a,b,c,i;
    scanf("%d \n %d \n %d",&a,&b,&c);
    for(i=b;i>=a;i--)
    {
        if(i%c==0)
        printf("%d \t",i);
    }
    

}
