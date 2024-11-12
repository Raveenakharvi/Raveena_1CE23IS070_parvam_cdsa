#include<stdio.h>
#include<stdbool.h>
#include<stdlib.h>
int main(){
        int arr[] ={4,2,6,1,7};
        int n = sizeof(arr)/sizeof(arr[0]);  
        int x = arr[0];
         for(int i =0;i<n;i++){
            for(int j=i+1;j<n;j++){
            if(arr[j-1]<x){
                x=arr[j-1];
            }
        }
        int t = arr[i];
        arr[i]=x;
        x=t;
        printf("%d",x); //input
    } 
}