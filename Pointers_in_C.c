#include <stdio.h>
#include <stdlib.h>
void update(int *a,unsigned int *b) 
{
    
     unsigned int n,m;
    n=*a+*b;
    m=(*a-*b);
    *a=n;
    *b=m;
     
}

int main() {
    int a, b;
    int *pa = &a, *pb = &b;
    
    scanf("%d %d", &a, &b);
    update(pa, pb);
    b= abs(b);
    printf("%d\n%d", a, b);

    return 0;
}
