#include<stdio.h>
#include <stdlib.h>

int main()
{
    int a,b,i,k=1;
    scanf("%d\n%d",&a,&b);
    
    for(i=1;i<=b;i++)
    {
            if(k%b!=0)
            {
            k=a*i;
            printf("%d\t",k);
            }
    }
    

}
