#include<stdio.h>
void main()
{
    int a;
    scanf("%d",&a);

    if((a%400==0)&&(a%100!=0)||(a%4==0))
      printf("%d is leap year number\n",a);
        else
        printf("%d is not leap year number\n",a);
}
