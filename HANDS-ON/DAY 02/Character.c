#include<stdio.h>
void main(){
    printf("%c\n",'A');//character
    printf("%s\n","A");//string
    char ch = 'B';
    printf("%c\n",ch);
    printf("%d\n",ch);
    ch++;  
    printf("%d\n",ch);
    printf("%c\n",ch);

    int i = ch;//Convert character to integer. Method 2 of finding ASCII value.
    printf("%d",i);
    i += 32;
    ch = i;
    printf("%c\n",ch);

    ch = 't';
    i = ch;
    i -= 32;
    ch = i;
    printf("\n\n%c",ch);
}