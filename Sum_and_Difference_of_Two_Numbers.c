#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
	int x,y;
    float z,n;
    scanf("%d %d",&x,&y);
    scanf("%f %f",&z,&n);
    printf("%d %d \n",(x+y),(x-y));
    printf("%0.1f %0.1f",(z+n),(z-n));
    return 0;
}
