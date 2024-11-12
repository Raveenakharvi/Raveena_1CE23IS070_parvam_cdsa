#include<stdio.h>
void main(){
    int x = 100 , y = 500;
    int a = ( 10 < 0)?x:y;
    printf("%d\n",a);
    {
        char a = (10 < 0)?'a':'b';
        printf("%c\n",a);
    }
}