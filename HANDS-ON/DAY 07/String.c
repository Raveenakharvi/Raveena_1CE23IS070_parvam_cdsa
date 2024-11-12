//Use array to store the strings
#include<stdio.h>
void main(){
    int count = 0;
    char name[] = {'C' , 'i' , 't' , 'y' , 'c' , 'o' , 'l' , 'l' , 'e' , 'g' , 'E' ,'A' , '\0'};
    printf("%s\n",name);
    printf("%c\n",name[1]);
    printf("%c\n\n",name[3]);
    for(int i =0;i<4;i++){
        printf("%c\t\t\n",name[i]);
    }
    for(int i=4;i >= 0;i--){
        printf("%c\t\t\n",name[i]);
    }
    //Run the loop till it is null(\0)
    for(int j=0;name[j] != '\0';j++){
        printf("%c\n",name[j]);
    }
    puts("\n\n");
    for(int k=0;name[k] != '\0' ;k++){
        if (name[k] == 'a' || name[k] == 'e' || name[k] == 'i' || name[k] == 'o' || name[k] == 'u')
        {printf("%c\n",name[k]);
        count++;
        }
    }
    printf("Vowels present in the string are : %d\n",count);
}