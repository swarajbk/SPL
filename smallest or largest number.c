//Write a C program to find the smallest/largest number among three (3) numbers
#include<stdio.h>
void main (){

int a,b,c;
printf("enter the value of a,b,and c \n");
scanf("%d%d%d",&a,&b,&c);
if((a>b) && (a>c))
    printf("%d is largest number",a);
else if((b>c &&  (b>a)))
    printf("%d is largest number",b);
    else
    printf("%d is largest number",c);

}
