#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
	
    int n,d,s;
    scanf("%d",&n);
    while(n>0)
       {
           d=n%10;
           s=s+d;
           n=n/10;
       }
    printf("%d",s);
    //Complete the code to calculate the sum of the five digits on n.
    
    
    
    return 0;
}
