#include<stdio.h>
void main(){
    //Compiler converts this statement into 
    //int * const arr={100,290,112,56,289,11}
    int arr[6] = {100,290,112,56,289,11};
    int * const ptr = &arr[0];
    arr[2]=25;
    *(ptr+2) = 119;
    printf("%d\n",arr[2]);
    printf("%d\n",*(ptr+2));
}