#include<stdio.h>
#include <stdlib.h>

int main()
{
    int a,b,i,j,k,s,t;
    scanf("%d\n%d",&a,&b);
    s=a;t=b;
    if(a%2==0&&b%2==0)
     for(k=s;k<=t;k++)
     {
        for(i=b;i>=s;i--)
        {
            if(i%2==0)
            {
            printf("%d\t",i);break;
            }b=i-1;
        }
        for(j=a;j<=t;j++)
        {
            if(j%2!=0)
            {
            printf("%d\t",j);break;
            }a=j+1;
        }
     }
    else 
        for(k=s;k<=t;k++)
        {   
            for(i=a;i<=t;i++)
            {
                if(i%2!=0)
                {
                printf("%d\t",i);break;
                }
            }a=i+1;
            for(j=b;j>=s;b=j--)
            
            {   
                if(j%2==0)
                {
                printf("%d\t",j);break;
                }
            }b=j-1;
            
        
        }

}
