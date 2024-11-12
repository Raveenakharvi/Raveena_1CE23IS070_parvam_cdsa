#include<stdio.h>
void main(){
    int i = 100, j = 2, c = i/2 ;
    //3.4 is double by default. In C language , fractional values are comsidered as
    //double by default.
    float f = 3.4;//3.4 is taken as double , but automatically converted to float.
    float t = 5.4f;//5.4 must be taken as a floating point value.
    float o = 100.00F;
    printf("%.2f",(o / j));

    int n = f;//Narrowing Conversion.
    printf("\n%d\n",n);
    
    //Casting.(<data-type>).In C language casting is optional.
    int n1 = 100; float f1 = (float)n1;// No data loss.Widening Conversion.
    printf("%f",f1);
}