#include <stdio.h>
#include <stdlib.h>

int main()
{

    int inp[30],i,n;
    int rise=0;
    int fall=0;
    int constant=0;
    n=7;
    inp[10]=1010101;

    for(i=1;i<n;i++)
    {


    if(inp[i]<inp[i+1])
    {

        rise++;

    }

    else if(inp[i]>inp[i+1])
    {

        fall++;

    }
    else if(inp[i]==inp[i+1])
    {

        constant++;

    }

    }
    printf("the number of rising edges are %d \n",rise);
    printf("the number of falling  edges are %d \n",fall);
    printf("the number of constants are %d \n",constant);
    return 0;
}
