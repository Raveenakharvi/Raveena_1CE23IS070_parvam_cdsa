#include<stdio.h>
void  main(){
    int t=700;
    int * const p=&t;
    //const int *p=&t;
    (*p)++;
    printf("%d\n",*p);
    int z=200;
    p=&z;
}