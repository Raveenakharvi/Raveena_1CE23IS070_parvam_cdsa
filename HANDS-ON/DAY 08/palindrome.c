#include<stdio.h>
void main(){
    int f = 12321 , x = 0 , y = 0,a=f;
    while(f>0){
        x = f%10;   //x=3
        y = y*10+x; //y =32
        f = f/10;   //0
    }

    printf("%d\n",y);
    {
        if(y == a){
            printf("YES\n");
        }    
        else{
            printf("NO\n");
        }
    }

}    
