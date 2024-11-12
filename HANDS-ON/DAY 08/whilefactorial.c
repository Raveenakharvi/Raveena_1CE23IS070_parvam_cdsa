#include<stdio.h>
void main(){
    int i = 5 , a = 1;
    while(i >= 1){
        a = a*i;
        i--;
        printf("%d\n",i);
    }
    printf("%d\n",a);
}