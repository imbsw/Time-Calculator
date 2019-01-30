#include <stdio.h>
#include <stdlib.h>

int main()
{
    long time;
    int d,h,m,s;

    printf("Enter Number Of Seconds:");
    scanf("%d",&time);

    d=time/(3600*24);
    h=(time%3600*24)/3600;
    m=(time%3600)/60;
    s=(time%60)/1;

    printf("\n day %d hours %d minutes %d and seconds %d",d,h,m,s);

    return 0;
}
