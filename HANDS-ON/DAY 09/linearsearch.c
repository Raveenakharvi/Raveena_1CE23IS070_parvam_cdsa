#include<stdio.h>
#include<stdbool.h>
int main(){
    int arr[] = {5,7,2,8,4,9,10};
    int x = 6 ;
    int n = sizeof(arr)/sizeof(arr[0]);
    bool b = false;
    for(int i =0;i<n;i++){
        if(x == arr[i]){
            b = true;
            break;
        }
    }        
        if(b){
            printf("YES\n");
        }else{
            printf("NO\n");
        }    
}        