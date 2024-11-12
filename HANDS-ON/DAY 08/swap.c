#include<stdio.h>
void main(){
    int a = 10 , b = 20;
    b = b-a;
    printf("b = %d\n",b);
    a = a+b;
    printf("a = %d",a);
}


#include<stdio.h>
void main(){
    int a= 10 , b= 20;
    a = a+b; //a = 30
    b = a - b; //b = 10
    a = a - b; // a = 20
    printf("%d\n",a,b);
}