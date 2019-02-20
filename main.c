#include <stdio.h>
#include <stdlib.h>

int main()
{
    int sw;
    printf("press 1 for switch is on and 2 for switch is off \n");
    scanf("%d",&sw);
    if(sw==1)
    {
        inten();

    }
    else if(sw==2)
    {

        printf("wiper is turned off \n");
    }
    return 0;
}
