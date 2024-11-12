#include<stdio.h>
int main(){
    int id=100;
    char status='Y';
    float fees=200000.00f;
    double total_fees=fees*4;
    printf("Roll No = %d\n",id);
    printf("Enrollment Status = %c\n",status);
    printf("Fees = %f\n",fees);
    printf("Total Fees = %lf\n",total_fees);
    return 1;

}