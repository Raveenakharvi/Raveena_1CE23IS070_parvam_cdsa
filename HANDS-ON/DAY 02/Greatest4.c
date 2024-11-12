#include<stdio.h>
int main(){
    int t1 = 40 ,t2 = 40,t3 = 40,t4 = 40;
    if (t1>t2 && t1>t3 && t1>t4){
        printf("%d t1 is greater",t1);
    }
    if (t2>t1 && t2>t3 && t2>t4){
        printf("%d t2 is greater",t2);
    }
    if (t3>t1 && t3>t2 && t3>t4){
        printf("%d t3 is greater",t3);
    }
    if (t4>t1 && t4>t2 && t4>t3) {
        printf("%d t4 is greater",t4);
    }
    else { 
        printf("All are equal");
    }
    return 0;
}