#include<stdio.h>
void main(){
    for(int i = 50 ; i <= 100;i++){
        printf("%d\n",i);
    }
    {
        for(int i = 50 ; i >=100;i--){
            printf("%d\n",i);
        }
    }
    for (int i = 10; i >=1;i--){
        printf("%d x 5 = %d\n",i , i*5);
    }
}