#include<stdio.h>
void main(){
    int i = 5, j = 10;
    while (i < --j)
        printf("I = %d",i);
    while (i < --j)
        printf("I = %d",i);
    while (0){
        printf("****\n");
    }
}