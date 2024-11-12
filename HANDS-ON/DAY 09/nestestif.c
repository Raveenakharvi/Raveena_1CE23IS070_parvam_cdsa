#include<stdio.h>
int main(){
   int a=10,b=20,c=30;
   if(a>b){
      if(a>c){
      }else{
         printf("b");
      }
   } 
   else if(b>c){
      printf("b");
   }
   else{
      printf("c is greatest\n");   
   }
}   