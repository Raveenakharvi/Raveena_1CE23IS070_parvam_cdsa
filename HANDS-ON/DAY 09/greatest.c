#include<stdio.h>
int main(){
    int a=10,b=20,c=30;
    if((a>b)&&(a>c)){
        printf("a is the greatest");
    }
    else if((b>a)&&(b>c)){
        printf("b is the greatest");
    }
    else{
        printf("c is the greatest");
    }
}