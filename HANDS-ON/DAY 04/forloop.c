#include<stdio.h>
void main(){
    puts("Forloop example....");
    /*for(;;){ // infinite loop
        printf("****");
    }*/
   int i=0,j=25;
   for(; i<j--;j=j-3,i++)
   {
      printf("*****\n");
   }
   printf("%d\n",i*j);
    puts("\nA simple for loop");


    /*for(int j=0;j<7;j++){
        printf("J=%d\t",j);
        getchar();
    }*/
    for(printf("Increment\t");printf("Condition checking\t"); printf("Updation\t")){
        printf("hello");
        getchar();
    }
}