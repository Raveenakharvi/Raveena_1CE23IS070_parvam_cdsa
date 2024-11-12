#include<stdio.h>
void main(){
    int a = 1;
    for( int i=5;i >= 1;i--){
        a=a*i;
        printf("%d\n",i);
    }
    printf("total factorial = %d\n",a);
}
