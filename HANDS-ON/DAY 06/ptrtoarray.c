#include<stdio.h>
void main(){
    int number[5]={100, 23, 56, 278, 10};
    printf("%d\n",number[0]);
    printf("%d\n",number[2]);
    printf("%d\n",*(number +2 ));
    //(number + 2*2)
    //*(number + 2*2)
    number[2]=800;
    *(number + 2) = 1000;
    printf("%d\n",number[2]);
}