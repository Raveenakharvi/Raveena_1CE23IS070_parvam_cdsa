#include<stdio.h>
void main(){
    int a = 10 , b = 20;
    int c = a + b;
    printf("%d\n",c);
    c = a++ + b;
    printf("%d\n",c);
    printf("%d\n",a);
    c = ++a + b;
    printf("%d",c);
    a=15;
    printf("\n\n Result: %d",(a + b-- + ++a + a * ++b / 5));
}