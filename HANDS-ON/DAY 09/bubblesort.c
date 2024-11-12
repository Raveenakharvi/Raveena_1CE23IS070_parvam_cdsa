#include<stdio.h>
#include<stdbool.h>
#include<stdlib.h>
int main(){
    int temp;
    int arr[]={9,8,7,6,5,4,3,2,1};
    int n = sizeof(arr)/sizeof(arr[0]);
    for(int i = 0;i < n;i++){
        for(int j = i+1;j < n;j++){
            if(arr[i]<arr[j]){
                temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
            }
        }
        printf("%d ",arr[i]);
    }
}