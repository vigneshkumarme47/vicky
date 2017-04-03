#include<stdio.h>
#include <stdlib.h>

int main()
{
    char a;
    a=getchar();
    switch(a)
    {
        case 'R':printf("RED");break;
        case 'G':printf("GREEN");break;
        case 'B':printf("BLUE");break;
        case 'r':printf("RED");break;
        case 'b':printf("BLUE");break;
        case 'g':printf("GREEN");break;
        default :printf("UNDEFINED");break;
    }
    


}
