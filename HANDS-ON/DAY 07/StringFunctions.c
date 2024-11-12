#include<stdio.h>
#include<string.h>
void main(){
    char arr[15] = {'C' , 'i' , 't' , 'y' , ' ' , 'c' , 'o' , 'l' , 'l' , 'e' , 'g' , 'e' , '\0'};
    //Counts the no. of characters and stores the count into the length.
    //int length=strlen(arr);
    //printf("Total length = %d\n",length);

    //char str1[20] = "City Engineering ";
    //char str2[10] = "College";
    //strcat(str1,str2);
    //printf("%s\n",str1);
    int count = 0;
    for(int i = 0; arr[i] != '\0'; i++){
        count++;
    }
    printf("Total count of the string : %d\n",count);
}