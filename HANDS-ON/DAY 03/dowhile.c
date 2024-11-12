#include<stdio.h>
void main()
{
    int i = 5 , j = 10;
    do
    {
        printf("I = %d\n",i);
    } while (i < j--);
    do{
        printf("*****\n");
    } while (0);

    i = 5; j =15;
    do{
        while(j >= 5){
            j--;
        }
        i++;
    }while(i <= j);
    printf("%d\n",i * j);

    i = 5; j = 15;
    while( i <= j){
        do{
            j--;
        }while ( j >= 5);
        i++;
    }
    printf("%d",i*j);
    
}


