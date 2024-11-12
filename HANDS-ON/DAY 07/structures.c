#include<stdio.h>
//student is a composite datatype
struct  student {
    int rollNo; char Name[50]; int SemNo;
    float fees; char course[50];
};
struct student s; //Global //s is the variable , student is the datatype.
//s is a composite variable
void main(){
    printf("%d\n",s.rollNo);
    printf("%f\n",s.fees);
    s.rollNo = 1001; s.fees = 52000.00f;
    printf("%d\t\t\n",s.rollNo);
    printf("%f\n",s.fees);
}
