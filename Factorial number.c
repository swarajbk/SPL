//find the factorial number of a given number provided by user.
#include<stdio.h>
void main()
{
    int i,n,f=1;
    printf("enter the value of n:\n");
    scanf("%d",&n);
    for(i=n;i>=1;i--)
        f=f*i;
    printf("the factorial of %d is:%d\n",n,f);
}
