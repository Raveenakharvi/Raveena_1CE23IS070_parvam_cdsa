#include<stdio.h>
#include<stdbool.h>
int main(){
   //int a[]={10,25,30,90,50,56,70,476,76};
   //int n=sizeof(a)/sizeof(a[0]);//n=5
   //for(int i=0;i<n;i++){
   //    printf("%d\n",a[i]);
   //}
   //printf("%d\n"a[n-1]);
   //{
   //    for(int i = n-1;i>=0;i--){
   //        printf("%d\n",a[i]);
   //    }
   //}
   int a[]={10,25,30,45,55};
   int n=sizeof(a)/sizeof(a[0]);//n=5
   //for(int i=0;i<n;i++){
   //    if(a[i]%2==0){
   //        printf("%d\n",a[i]);
   //    }
   //}
    //for(int i=n-1;i>=0;i--){
    //    if(a[i]%2==1){
    //        printf("%d\n",a[i]);
    //    }
    int c=0;
    {
    for(int i=0;i<n;i++){
        c=c+a[i];
    }  printf("%d\n",c);
    }
}