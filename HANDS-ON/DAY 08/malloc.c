#include<stdio.h>
#include<stdlib.h>
int main(){
    int a;
    //printf("Enter size");
    //scanf("%d",&a);
    int*arr=(int*)malloc(a*sizeof(int));
    arr[2]=20;
    printf("%d",arr[1]);
}