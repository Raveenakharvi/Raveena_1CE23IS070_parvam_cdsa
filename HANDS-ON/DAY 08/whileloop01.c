#include<stdio.h>
void main(){
    int f = 123 , x = 0 , y = 0;
    while(f>0){
        x = f%10;
        y = y*10+x;
        f = f/10;
        printf("%d\n",y);
    }    
}    
