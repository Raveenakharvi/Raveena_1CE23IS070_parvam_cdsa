#include<stdio.h>
void main(){
    int t = 700;
    const int *p = &t;
    (*p)++;//As pointer is constant even the value assigned to it is also constant. (or) cannot change the value of t using  the pointer p.
    t++;
    printf("%d\n",t);
}